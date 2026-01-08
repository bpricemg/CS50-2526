// Read a file and print the characters
#include <stdio.h>

int main(void)
{
    // Open .txt file
    FILE *text = fopen("cs50.txt", "r");

    // Check if opened successfully
    if (!text)
    {
        printf("Error - file did not open\n");
        return 1;
    }

    // Read the .txt file
    char ch = fgetc(text);

    // Print every character
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(text); // Move the buffer to the next character
    }

    printf("\n");

    // Close the file
    fclose(text);
}
