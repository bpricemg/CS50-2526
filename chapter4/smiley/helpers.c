#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    // For each row in the height
    for (int i = 0; i < height; i++)
    {
        // For each column in the width
        for (int j = 0; j< width; j++)
        {
            // Change all black pixels to bright yellow
            if (image[i][j].rgbtRed == 0x00 &&
                image[i][j].rgbtGreen == 0x00 &&
                image[i][j].rgbtBlue == 0x00)
            {
                image[i][j].rgbtRed = 0xff;
                image[i][j].rgbtGreen = 0xff;
            }

            // Change all white pixels to pink
            if (image[i][j].rgbtRed == 255 &&
                image[i][j].rgbtGreen == 255 &&
                image[i][j].rgbtBlue == 255)
            {
                image[i][j].rgbtRed = 0xc0;
                image[i][j].rgbtGreen = 0x40;
                image[i][j].rgbtBlue = 0x98;
            }
        }
    }
}
