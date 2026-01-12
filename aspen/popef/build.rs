fn main() {
  capnpc::CompilerCommand::new()
    .src_prefix("capnp")
    .file("capnp/popef.capnp")
    // .file("capnp/bar.capnp")
    .run()
    .expect("schema compiler command");
  
}
