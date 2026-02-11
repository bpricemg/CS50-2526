# Search for a number
from cs50 import get_int

numbers = [4, 6, 8, 10, 12, 14]

n = get_int("Number: ")

# Search for the number

if n in numbers:
    print("Found")
    exit(0)

print("Not found")
exit(1)
