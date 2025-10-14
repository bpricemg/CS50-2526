/**
 * Test a function that multiplies two floats
 */

 #include <cs50.h>
 #include <stdio.h>

 // Function prototypes
float mult(float x, float y);

 int main(void)
 {
    // Get a number from user
    float first = get_float("Number: ");

    // Get another number
    float second = get_float("Another number: ");

    // Multiply with a function call
    float product = mult(first, second);

    // Print
    printf("The product of %0.2f and %0.2f is %0.2f.\n", first, second, product);
 }

 // Function definitions
float mult(float x, float y)
{
    return x * y;
}
