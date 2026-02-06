from cs50 import get_int

def main():
    # Get the height from the user
    h = get_height()

    # Print each row of the pyramids
    for i in range(1, h + 1):
        row = " " * (h - i) + "#" * i + "  " + "#" * i
        print(row)


def get_height():
    # Get a value between 1 and 8
    while True:
        h = get_int("Height: ")
        if 1 <= h <= 8:
            return h


main()
