/**
 * Get a postive integer
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    int n;
    do
    {
        n = get_int("Positive integer: ");
    }
    while (n <= 0);

    printf("You chose the positive integer %i.\n", n);
 }
