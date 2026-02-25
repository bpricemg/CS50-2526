# Say hello to a user given their name in the commmand line
from sys import argv

# Error checking
if len(argv) < 2:
    # Print an error message
    print("Usage: python argv1.py [first name] [second name] ...")
    exit(1)


print("hello, ", end="")

# Print every name after
for arg in argv[1:]:
    print(f"{arg} ", end="")
print()
