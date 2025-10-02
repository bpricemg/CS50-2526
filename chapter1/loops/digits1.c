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

    // Initialize a counter, start with one to account for last "chomp"
    int count = 1;

    // "Chomp" off each right digit, one by one, and add to count
    while (number > 9)
    {
        number /= 10;
        count++;
    }

    // Print result
    printf("There are %i digits in this number.\n", count);
}
