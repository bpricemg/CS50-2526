/**
 * Raise a number to a power
 */

 #include <cs50.h>
 #include <math.h>
 #include <stdio.h>

 int main(void)
 {
    // Prompt the user for the base
    float base = get_float("Base: ");

    // Prompt the user for the power
    float power = get_float("Power: ");

    // Print result
    printf("%0.3f to the %0.3f power is %0.3f.\n", base, power, pow(base, power));
 }
