/**
 * Print each character of a string vertically
 */

 #include <cs50.h>
 #include <stdio.h>
 #include <string.h>

 int main(void)
 {
    // Get a string from the user
    string s = get_string("Input: ");

    // Loop through the string
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c\n", s[i]);
    }

 }
