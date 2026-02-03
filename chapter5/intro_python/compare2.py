from cs50 import get_string

# Get a string from user
s = get_string("Do you agree? (y/n) ")

# Determine users input
if s == "y" or s == "Y":
    print("Yes.")
elif s == "n" or s == "N":
    print("No.")
