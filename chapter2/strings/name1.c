/**
 * The length of a person's first name
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // Get a user's name
    string name = get_string("Full name: ");

    // Count the the number of characters before the first space
    int length = 0;
    while(name[length] != ' ')
    {
        length++;
    }

    // Print the length
    printf("The length of first name: %i\n", length);
 }
