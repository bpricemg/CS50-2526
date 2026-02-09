# Find your grade average
from cs50 import get_int

scores = []

# Fill out list with scores
n = get_int("Number of scores: ")
for i in range(n):
    score = get_int("Score: ")
    scores.append(score)

# Find the average and print
average = sum(scores) / len(scores)
print(f"Average: {average:.3f}")
