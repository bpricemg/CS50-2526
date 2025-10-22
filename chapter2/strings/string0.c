/**
 * Print each character of a string vertically
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(void)
 {
    // Get a string from the user
    string s = get_string("Input: ");

    // Determine the length of the string
    // (how many letters before null character)
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }

    // Loop through the string
    for (int i = 0; i < length; i++)
    {
        printf("%c\n", s[i]);
    }

 }
