use std::{
  env, fs,
  io::{Cursor, Read},
};

use zerocopy::{FromBytes, Immutable, KnownLayout};

#[derive(FromBytes, Immutable, KnownLayout)]
pub struct GcExeHeader {
  // GC_EXE_3 (seems it can be GC_EXE_2 or GC_EXE_1?)
  magic: [u8; 8],
  archive_decompressed_size: u64,
  archive_compressed_size: u64,
  metadata_decompressed_size: u64,
  metadata_compressed_size: u64,
}

// takes a gp file and spits out an archive and metadata file
fn main() {
  let args = env::args().collect::<Vec<_>>();
  let file = fs::read(&args[1]).unwrap();

  let (header, archive) = GcExeHeader::ref_from_prefix(&file).unwrap();
  let (archive, metadata) = archive.split_at(header.archive_compressed_size as _);


  println!("{} {}", archive.len(), header.archive_compressed_size);
  println!("{} {}", metadata.len(), header.metadata_compressed_size);

  // dump the archive file
  let mut archive_decomp = Vec::with_capacity(header.archive_decompressed_size as _);
  let mut cursor = Cursor::new(archive);
  while cursor.position() < archive.len() as _ {
    println!("{:X}", cursor.position());
    let mut x = lz4_flex::frame::FrameDecoder::new(&mut cursor);
    x.read_to_end(&mut archive_decomp).unwrap();
  }
  fs::write(&args[2], &archive_decomp).unwrap();

  // dump the metadata blob
  let mut metadata_decomp = Vec::with_capacity(header.metadata_decompressed_size as _);
  let mut cursor = Cursor::new(metadata);
  while cursor.position() < metadata.len() as _ {
    println!("{:X}", cursor.position());
    let mut x = lz4_flex::frame::FrameDecoder::new(&mut cursor);
    x.read_to_end(&mut metadata_decomp).unwrap();
  }
  fs::write(&args[3], &metadata_decomp).unwrap();

  assert_eq!(archive_decomp.len(), header.archive_decompressed_size as _);
  assert_eq!(metadata_decomp.len(), header.metadata_decompressed_size as _);
}
