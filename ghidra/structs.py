from clang.cindex import TranslationUnit, CursorKind, Index
import json
import re

index = Index.create()
tu = index.parse("./structs.h")
text = open("./structs.h").read()
cx = tu.cursor

r = re.compile(r"RegField ([\w_]+);")

structs = list(cx.get_children())
namespaces = list()
for struct in structs:
  print(f"{struct.kind} {struct.displayname}")
  if struct.kind != CursorKind.STRUCT_DECL:
    continue
  if struct.displayname == "SXP":
    break

  print(struct.extent)
  print(f"{struct.displayname}")
  without_ns = struct.displayname[:-2]
  ns_structs = list()
  namespaces.append({ "name": without_ns, "registers": ns_structs })
  for child in struct.get_children():
    if not child.displayname.endswith("_t"):
      continue

    without = child.displayname[len(without_ns) + 1:-2]
    start = child.extent.start.offset
    end = text.index(" }", start + len(child.displayname))

    reg_text = text[start:end]    
    with_base_address = "RegisterWithSingleBaseAddress" in reg_text;
    fields = r.findall(reg_text)
    print(fields)
    ns_structs.append({
      "name": without,
      "base_addr": with_base_address,
      "fields": fields
    })

json.dump(namespaces, open("register_list.json", "w"), indent = 2)
