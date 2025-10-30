/**
 * Say hello to a use if they provide their first name
 * in the command line
 */

 #include <cs50.h>
 #include <stdio.h>

 int main(int argc, string argv[])
 {
    if (argc > 1)
    {
        printf("hello,");

        // For each name provided by the user
        for (int i = 1; i < argc; i++)
        {
            printf(" %s", argv[i]);
        }

        printf("\n");
    }

    else
    {
        printf("hello, world\n");
    }
 }
