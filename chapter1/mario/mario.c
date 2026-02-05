#include <stdio.h>

int main(void)
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        // Print space
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Print block
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        // Prepare for next line
            printf("\n");
    }
}
