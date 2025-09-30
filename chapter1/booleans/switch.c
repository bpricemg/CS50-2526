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
    switch(answer)
    {
        case 'Y':
        case 'y':
            printf("You said yes.\n");
            break;

        case 'N':
        case 'n':
            printf("You said no.\n");
            break;

        default:
            printf("Error - please provide an apropriate response.\n");
    }

 }
