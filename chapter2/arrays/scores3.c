/**
 * Average three scores using an array
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // Let the user decide how many scores
    int n = get_int("How many scores do you want to enter? ");

    int scores[n];
    for(int i = 0; i < n; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    // TODO Print the average
    printf("Average: %0.2f%%\n", (scores[0] + scores[1] + scores[2]) / 3.0);
 }
