/**
 * Print the user's initials
 */

 #include <cs50.h>
 #include <ctype.h>
 #include <stdio.h>
 #include <string.h>

 int main(void)
 {
    // Get the user's name
    string name = get_string("Full name: ");

    // Print the first initial as an upper case
    printf("%c", toupper(name[0]));

    // Find the remaining initials, located after a space
    for (int i = 1; i < strlen(name); i++)
    {
        // If a space or a hyphen
        if (name[i] == ' ' || name[i] == '-')
        {
            // Print as upper case letter
            printf("%c", toupper(name[i + 1]));
        }
    }
    printf("\n");
 }
