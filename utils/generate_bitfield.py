# bad script to generate markdown tables

components = {}

with open("data.txt", "r") as fh:
    for line in fh:
        if not line: continue
        parts = line[:-2].split(" ")
        const_name = parts[2]
        const_val = parts[4]
        identifier_pt1 = const_name.split("__")[1]
        if identifier_pt1 == "INDEX": continue
        identifier_pt2 = const_name.split("__")[2]

        print(identifier_pt1, identifier_pt2)
        if identifier_pt1 not in components:
            components[identifier_pt1] = {}
        
        components[identifier_pt1][identifier_pt2.lower()] = int(const_val, 16)

with open("data.txt", "w") as fh:
    fh.write("|Field name|Bit field|Reset value|Access semantics|Description|\n")
    fh.write("|-|-|-|-|-|\n")
    for component_name, component_parts in components.items():
        if component_parts["size"] == 0: raise Exception("size is invalid")
        bitfield_end = component_parts["shift"]
        # minus one because inclusive
        bitfield_start = component_parts["size"] + component_parts["shift"] - 1

        if bitfield_end == bitfield_start:
            fh.write(f"|{component_name}|[{bitfield_start}]|???|???|Unknown|\n")
        else:
            fh.write(f"|{component_name}|[{bitfield_start}:{bitfield_end}]|???|???|Unknown|\n")
