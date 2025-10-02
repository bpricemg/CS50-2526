/**
 * Determine the number of digits in an integer
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive number from user
    int number;
    do
    {
        number = get_int("Positive integer: ");
    }
    while (number <= 0);

    // Initialize a counter
    int count = 0;

    // "Chomp" off each right digit, one by one, and add to count
    while (number > 9)
    {
        number = number / 10;
        count = count + 1;
    }

    // Must be one more digit left in the number
    count = count + 1;

    // Print result
    printf("There are %i digits in this number.\n", count);
}
