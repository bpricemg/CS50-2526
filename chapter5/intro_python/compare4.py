from cs50 import get_string

# Get a string from user
s = get_string("Do you agree? (y/n) ")

# Convert to lower case
s = s.lower()

# Determine users input
if "y" in s:
    print("Yes.")
elif "n" in s:
    print("No.")
