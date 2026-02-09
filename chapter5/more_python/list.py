# Find your grade average

scores = [95, 72, 33]

average = 0
count = 0
for score in scores:
    average += score
    count += 1

average = average / count

print(f"Average: {average:.3f}")
