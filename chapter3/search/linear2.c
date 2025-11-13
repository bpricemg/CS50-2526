/**
 * Linear search for a name and print their phone number
 */

 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>

 int main(void)
 {
    // An array of names
    string names[] = {"Ava", "Will", "Ben", "Xavi", "Cooper", "Liv", "Violet"};
    string numbers[] = {"555-555-5555", "413-458-9582", "413-555-5555", "888-888-8888",
                        "000-123-4567", "413-000-0000", "413-888-0000"};

    // Search
    string name = get_string("Name: ");
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found\n%s\n", numbers[i]);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
 }
