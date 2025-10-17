/**
 * Average three scores using an array
 */

 #include <stdio.h>

 int main(void)
 {
    // Scores
    int scores[3];
    scores[0] = 63;
    scores[1] = 98;
    scores[2] = 42;

    // Print the average
    printf("Average: %0.2f%%\n", (scores[0] + scores[1] + scores[2]) / 3.0);
 }
