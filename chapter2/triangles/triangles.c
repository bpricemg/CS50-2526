// Checks to see if three side lengths would make a vaild trinagle
#include <cs50.h>
#include <stdio.h>

// Declare functions
bool valid_triangle(float x, float y, float z);

int main(void)
{
    // Get side lengths from user
    printf("Please provide the three sides lengths of a triangle.\n");
    float side1 = get_float("1st Side: ");
    float side2 = get_float("2nd Side: ");
    float side3 = get_float("3rd side: ");

    // TODO: Determine if a valid triangle by calling valid_triangle then print result "Valid!" or "Invalid!"
                    valid_triangle( , , )
}

// TODO: Function that checks to see if a valid triangle
bool valid_triangle(float x, float y, float z)
{
    // TODO: Check for all positive sides, return false if not
    if ( any are negative )
    {
        return false;
    }
    // TODO: Check that sum of any two sides greater than third, return false if not
    if ()
    {
        return false;
    }

    if ()

    if ()

    // If we passed both tests, we're good!
    return true;

}
