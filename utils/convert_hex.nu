def main [] {
  loop {
    input | into int | format number | get lowerhex | print
  }
}
