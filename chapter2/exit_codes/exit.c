/**
 * Say hello to a user if the user provides their first name
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

    // Say hello
    printf("hello, %s\n", argv[1]);

    // Return a success
    return 0;
}
