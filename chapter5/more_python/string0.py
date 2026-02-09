# Program that loops through each character in a string and
# prints it as a capital
from cs50 import get_string

# Get a string from user
s = get_string("Before: ")

print("After: ", end="")

# For each character in string
for c in s:
    # Print as uppercase
    print(c.upper(), end="")

print()
