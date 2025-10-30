/**
 * Say hello to a user with their initials from their name
 * in the command line
 */

 #include <cs50.h>
 #include <ctype.h>
 #include <stdio.h>

 int main(int argc, string argv[])
 {
    // First and last name only
    if (argc == 3)
    {
        printf("hello, %c. %c.\n", toupper(argv[1][0]), toupper(argv[2][0]));
    }
    else
    {
        printf("Usage: ./initials [first name] [last name]\n");
    }
 }
