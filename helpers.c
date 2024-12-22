#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{  float buffer = 0;
    float buffer2 = 0;
    int average = 0;
for (int i = 0; i < height; i++)
{
    for (int j = 0; j < width;j++)
    {
        buffer = (image[i][j].rgbtRed + image[i][j].rgbtBlue+image[i][j].rgbtGreen);
        buffer2 = buffer/3;
         average =  round (buffer2);
        
        image[i][j].rgbtRed = average;
        image[i][j].rgbtBlue = average;
        image[i][j].rgbtGreen = average;
    }
}
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    float buffer;
    float buffer2;
    float buffer3;
    for (int i = 0; i < height; i++)
{
    for (int j = 0; j < width;j++)
    {
        buffer = (image[i][j].rgbtRed*0.393) + (image[i][j].rgbtBlue*0.189)+(image[i][j].rgbtGreen*0.769);
        
        
        buffer2 = (image[i][j].rgbtRed*0.349) + (image[i][j].rgbtBlue*0.168)+(image[i][j].rgbtGreen*0.686);
        
   
        buffer3 = (image[i][j].rgbtRed*0.272) + (image[i][j].rgbtBlue*0.131)+(image[i][j].rgbtGreen*0.534);
        
        image[i][j].rgbtBlue = round(buffer3);
        
        image[i][j].rgbtRed = round(buffer);
  
        image[i][j].rgbtGreen = round(buffer2);
        
        
          if (buffer > 255)
        {
            image[i][j].rgbtRed = 255;
        }
        
        if (buffer2 > 255)
        {
            image[i][j].rgbtGreen = 255;
        }
            if (buffer3 > 255)
        {
            image[i][j].rgbtBlue = 255;
        }
        
    }
}
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE buffer;
    
for (int i = 0; i < height; i++)
    {

        if (width % 2 == 0)
        {
            for (int j = 0;j<width/2;j++)
            {
            buffer = image [i] [j];
            image[i] [j] = image [i] [width-1-j];
            image[i] [width-1-j] = buffer;
            
            }
        }
        else
        {
            for (int j = 0;j < (width+1)/2;j++)
            {
                buffer = image [i] [j];
            image[i] [j] = image [i] [width-1-j];
            image[i] [width-1-j] = buffer;
            
            }
        }
    }

return;
}


// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
