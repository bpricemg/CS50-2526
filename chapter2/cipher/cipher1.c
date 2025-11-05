/**
 * Cipher a message with 5 characters as key
 */

 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>

 int main(void)
 {
    string message = "Voila!";

    // Cipher the message
    printf("Ciphered message: ");

    // For each character in the message
    for (int i = 0; i < strlen(message); i++)
    {
        // Go 5 ASCII characters forward with "wrapping"
        // (note* this only works for capital letters)
        printf("%c", (message[i] + 5 - 'A') % 26 + 'A');
    }
    printf("\n");

    // Return success
    return 0;
 }
