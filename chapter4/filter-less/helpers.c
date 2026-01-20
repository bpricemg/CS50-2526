#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Take average of red, green, and blue

            // Update pixel values
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Save the original colors

            // Compute sepia values

            // Update pixel with sepia values
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
     // Loop over all pixels
    for (int i = 0; i < height; i++)
    {
        // Only look at the left half of row
        for (int j = 0; j < width / 2; j++)
        {
            // Swap pixels
            // Create a temp variable so that we don't lose a RGB
            RGBTRIPLE temp =
            // Swap j with width - 1 - j
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
