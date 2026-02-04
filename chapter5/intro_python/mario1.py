# Horizontal stack of bricks
from cs50 import get_int

def main():
    # Get the height for the use
    n = get_height()

    # Print the blocks
    for i in range(n):
        print("#", end="")

    # Print a new line
    print()

def get_height():
    # Get a postive value
    while True:
        n = get_int("Height: ")
        if n > 0:
            break
    return n

main()
