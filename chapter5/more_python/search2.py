# Search for a name
from cs50 import get_string

names = ["Will", "Cooper", "Roman"]

s = get_string("Name: ")

# Search for the name
for name in names:
    if name.upper().strip() == s.upper().strip():
        print("Found")
        exit(0)

print("Not found")
exit(1)
