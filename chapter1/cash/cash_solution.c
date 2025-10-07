/**
 * Alternate solution for cash
 */

 #include <cs50.h>
 #include <math.h>
 #include <stdio.h>

 int main(void)
 {
    // Get the change
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    // Convert from dollars to cents
    int cents = round(dollars * 100);

    // Demerine the number of quarters
    int coins = cents / 25;

    // Determine the remaining amount after quarters
    cents %= 25;

    // Dimes
    coins += cents / 10;

    // Update cents
    cents %= 10;

    // Nickles
    coins += cents / 5;

    // Update cents
    cents %= 5;

    // The remainder is just pennies
    coins += cents;

    // Print the number of coins
    printf("%i\n", coins);


 }
