/**
 * Test out some integer arithmetic
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // Prompt the user for an integer and save it
    int number1 = get_int("Integer, please: ");

    // Prompt the user for another integer and save it
    int number2 = get_int("Another integer, please: ");

    // Addition with an extra variable
    // int sum = number1 + number2;
    // printf("%i + %i is %i.\n", number1, number2, sum);

    // Print out result
    printf("%i + %i is %i.\n", number1, number2, number1 + number2);
    printf("%i - %i is %i.\n", number1, number2, number1 - number2);
    printf("%i * %i is %i.\n", number1, number2, number1 * number2);

    // Note* an int divided by an int is always an int
    // Floor division (how many times does number2 go into number1?)
    printf("%i floor divided by %i is %i.\n", number1, number2, number1 / number2);

    printf("The remainder when %i is divided by %i is %i.\n", number1, number2, number1 % number2);
 }
