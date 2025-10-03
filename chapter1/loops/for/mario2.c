#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive int
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while (n < 0);

    // Print n "?"
    for (int i = 0; i < n; i++)
    {
        printf("?");
    }

    printf("\n");
}
