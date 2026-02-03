from cs50 import get_int

def main():
    n = get_int("choose a number: ")
    for i in range(n):
        meow()

def meow():
    print("meow")

main()
