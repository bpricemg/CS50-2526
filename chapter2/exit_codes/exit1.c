/**
 * Count the number of letters in the user's first name
 */

 #include <cs50.h>
 #include <stdio.h>

int main(int argc, string argv[])
{
    // Check to see if the requirements have been met
    if (argc != 2)
    {
        // Print a usage message
        printf("Usage: ./exit <first name>\n");

        // Return an int for main, program stop running
        // Not a success
        return 1;
    }

    // Tally the number of charachers in first name
    int tally = 0;
    while (argv[1][tally] != '\0')
    {
        tally++;
    }

    // Print the result
    printf("The number of characters in your first name is %i\n", tally);

    // Return a success
    return 0;
}
