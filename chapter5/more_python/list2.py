# Find your grade average
from cs50 import get_int

scores = []

# Fill out list with scores
for i in range(3):
    score = get_int("Score: ")
    scores.append(score)

# Find the average and print
average = sum(scores) / len(scores)
print(f"Average: {average:.3f}")
