from cs50 import get_int

# Get int from user
n = get_int("n: ")

# Even or odd?
if n % 2 == 0:
    print("Even.")
else:
    print("Odd.")
