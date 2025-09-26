/**
 * Make division actually happen
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // Prompt the user for a number
    float first = get_float("Number: ");

    // Prompt the user another number
    float second = get_float("Another number: ");

    // Divide these two numbers and print the value, with two decimal values
    // Note* to get division to work as expected one of the values must
    // be a float
    printf("%0.2f divided by %0.2f is %0.2f.\n", first, second, first / second);
 }
