# Prints all favorites in CSV using csv.DictReader

import csv

# Open CSV file
with open("favorites.csv", "r") as file:

    # Create DictReader
    reader = csv.DictReader(file)

    # Counts
    counts = {}

    # Iterate over CSV file, printing each favorite
    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

    # Print counts
    # print(counts)
    for favorite in sorted(counts, key=counts.get, reverse=True):
        print(f"{favorite}: {counts[favorite]}")
