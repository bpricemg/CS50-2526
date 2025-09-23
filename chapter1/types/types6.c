// Get an integer from the user
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's favorite number
    long int favorite = get_long("What is your favorite number? ");

    // Confirm the user's choice
    printf("You chose the number %li.\n", favorite);
}
