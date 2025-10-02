#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float number = get_float("Float: ");

    printf("%.99f\n", number);
}
