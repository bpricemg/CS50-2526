/**
 * Average scores using an array
 */

#include <cs50.h>
#include <stdio.h>

// Function prototype
float array_average(int length, int array[]);

 int main(void)
 {
    // Let the user decide how many scores
    int n = get_int("How many scores do you want to enter? ");

    int scores[n];
    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    // Print result
    printf("Average: %0.2f%%\n", array_average(n, scores));
 }

 float array_average(int length, int array[])
 {
    // Add all the numbers up
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }

    // Divide by the number of scores
    // Typecast n to a float for division
    return sum / (float) length;
 }
