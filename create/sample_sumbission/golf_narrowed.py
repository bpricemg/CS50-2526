from cs50 import get_int, get_string

def main():
    holes = []
    while True:
        hole_number = get_int("Golf course hole number: ")
        while True:
            par = get_int("Hole par: ")
            if par > 2 and par < 6:
                break
        score = get_int("Your score: ")
        holes.append({"hole number": hole_number,
                        "par": par,
                        "score": score})
        print()

        while True:
            more = get_string("Would you like to input information for another golf hole? ").lower()
            if more in ["no", "n", "yes", "y"]:
                break
        if "n" in more:
            break

        print()

    print()

    print_par(holes)

def print_par(holes):
    total_par = 0
    total_score = 0
    for row in holes:
        total_par += row["par"]
        total_score += row["score"]
    if total_score < total_par:
        print(f"You were {total_par - total_score} under par though {len(holes)} holes.")
    elif total_score > total_par:
        print(f"You were {total_score - total_par} over par though {len(holes)} holes.")
    else:
        print(f"You were even par through {len(holes)} holes.")

main()

