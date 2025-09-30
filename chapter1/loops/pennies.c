/**
 * Calculate the number of pennies someone would have if
 * their change doubled every day for a month
 */

 #include <cs50.h>
 #include <math.h>
 #include <stdio.h>

 int main(void)
 {
    // Get starting change, must be postive
    long pennies;
    do
    {
        pennies = get_int("Number of pennies to start: ");
    }
    while(pennies <= 0);

    // Get the number of days in the month
    // Make sure the user only provides 28, 29, 30, 31
    int days;
    do
    {
        days = get_int("Number of days in month: ");
    }
    while(days < 28 || days > 31);

    // Double the number of pennies each day for a month
    pennies = pennies * pow(2, days);

    // Print the result
    printf("You will have $%0.2f after one month!\n", pennies / 100.0);
 }
