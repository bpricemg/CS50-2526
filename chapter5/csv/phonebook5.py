# Load a csv as a dict then search for a name/number
import csv
from cs50 import get_string
from sys import exit

# Read csv and load as a list of dicts
people = []
with open("phonebook.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        people.append(row)
#print(people)

# Search for a name
name = get_string("Name: ")
for person in people:
    if person["name"] == name:
        print(f"Number: {person["number"]}")
        exit(0)

print("Not found")
