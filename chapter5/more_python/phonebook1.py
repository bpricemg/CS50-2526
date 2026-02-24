# Implement a phone book using a dictionary
from cs50 import get_string

people = {
    "Will": "413-458-9582",
    "Cooper": "555-555-5555",
    "Roman": "413-123-4567"
}

# Ask for a name
name = get_string("Name: ")

# Search for name
if name in people:
    print(f"Number: {people[name]}")
else:
    print("Not found")
