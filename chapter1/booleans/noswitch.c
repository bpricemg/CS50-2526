/**
 * Get an answer from the user
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // Prompt the user for a character
    char answer = get_char("Answer (Y/N): ");

    // Confirm the users input
    if (answer == 'Y' || answer == 'y')
    {
        printf("You said yes.\n");
    }
    else if (answer == 'N' || answer == 'n')
    {
        printf("You said no.\n");
    }
    else
    {
        printf("Error - please provide an apropriate response.\n");
    }
 }
