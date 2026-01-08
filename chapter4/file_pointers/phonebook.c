// Make a phonebook that can be saved to computer for future usage
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Open CSV (comma separated values) file
    FILE *fonebook = fopen("phonebook.csv", "w");

    // Stop the program if the file doesn't open
    if (!fonebook)
    {
        return 1;
    }

    // Get name and number
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print to file
    fprintf(fonebook, "%s,%s\n", name, number);

    // Close file
    fclose(fonebook);

}
