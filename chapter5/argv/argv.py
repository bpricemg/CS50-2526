# Say hello to a user given their name in the commmand line
from sys import argv

# If there is a least one name
if len(argv) >= 2:
    print("hello, ", end="")

    # Print every name after
    for arg in argv[1:]:
        print(f"{arg} ", end="")
    print()

else:
    print("hello, world")
