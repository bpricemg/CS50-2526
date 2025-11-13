/**
 * Linear search for an element in an array
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // An array of numbers
    int numbers[] = {4, 8, 50, 16, 23, 42};

    // Search
    int n = get_int("Integer: ");
    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found at index %i\n", i);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
 }
