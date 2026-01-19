while True:
  inp = input()
  try:
    print(f"0x{eval(inp):x}")
  except:
    print("failed to parse")
