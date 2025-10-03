/**
 * Print a square of blocks
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the height (and width)
    int height;
    do
    {
        height = get_int("Number: ");
    }
    while (height < 0);

    // For each row
    for (int row = 0; row < height; row++)
    {
        // For each column
        for (int col = 0; col < height; col++)
        {
            // Print a block
            printf("#");
        }

        // Print a new line to prepare for next row
        printf("\n");
    }
}
