# Implement a linear seach for name
from cs50 import get_string

names = ["Will", "Cooper", "Roman"]

# Ask for a name
name = get_string("Name: ")

# Search for name
if name in names:
    print("Found")
else:
    print("Not found")
