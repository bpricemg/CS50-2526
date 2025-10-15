#include <cs50.h>
#include <math.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

/**
 * Get the change owed from user and return
 * that as a number of cents (int)
 */
int get_cents(void)
{
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars <= 0);

    return round(dollars * 100);
}

/**
 * Return the number of quarters given the change
 */
int calculate_quarters(int cents)
{
    return cents / 25;
}

/**
 * Return the number of dimes given the change
 */
int calculate_dimes(int cents)
{
    return cents / 10;
}

/**
 * Return the number of nickles given the change
 */
int calculate_nickels(int cents)
{
    return cents / 5;
}

/**
 * Return the number of pennie given the change
 * Note* the number of pennies is the amount of cents remaining
 */
int calculate_pennies(int cents)
{
    return cents;
}
