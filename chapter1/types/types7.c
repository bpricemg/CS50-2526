// Get an integer from the user
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's favorite number
    float favorite = get_float("What is your favorite number? ");

    // Confirm the user's choice
    printf("You chose the number %f.\n", favorite);
}
