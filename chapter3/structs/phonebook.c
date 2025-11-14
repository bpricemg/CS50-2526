/**
 * Linear search for a phone number
 */

 #include <cs50.h>
 #include <stdio.h>
 #include <strings.h>

 typedef struct
 {
    string name;
    string number;
 }
 person;

 int main(void)
 {
    // Array of people
    person people[7];

    // Fill in the array
    people[0].name = "Ava";
    people[0].number = "555-555-5555";

    people[1].name = "Will";
    people[1].number = "413-458-9582";

    people[2].name = "Ben";
    people[2].number = "413-555-5555";

    people[3].name = "Xavi";
    people[3].number = "888-888-8888";

    people[4].name = "Cooper";
    people[4].number = "000-123-04567";

    people[5].name = "Liv";
    people[5].number = "413-000-0000";

    people[6].name = "Violet";
    people[6].number = "413-888-0000";

    // Ask the user who to search for
    string name = get_string("Name: ");

    // Search for name
    for (int i = 0; i < 7; i++)
    {
        if (strcasecmp(name, people[i].name) == 0)
        {
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
 }
