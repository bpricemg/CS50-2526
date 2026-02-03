from cs50 import get_string

# Get a string from user
s = get_string("Do you agree? (y/n) ")

# Determine users input
if s in ["y", "Y", "yes", "Yes", "Yes"]:
    print("Yes.")
elif s in ["n", "N", "no", "No", "NO"]:
    print("No.")
