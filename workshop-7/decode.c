#include <stdio.h>
// #include "lodepng.h"
// #include <stdlib.h>

// //syntax:
// //    lodepng_decode32_file(&image,&width,&height,"filename.png");


// int main(){
//     unsigned char *image;
//     unsigned int width,height;
//     lodepng_decode32_file(&image,&width,&height,"test1.png");
//     printf("IMage with:%d,height:%d",width,height);
//     free(image);
//     return 0;
//     int i;
//     for (i=0;i<widthheight4;i=i+4){
//         printf("[Red:%d Green:%d Blue:%d Alpha:d]",image[0],image[i+1],image[i+2],image[i+3]);
        
//     }
//     free(image);
//     return 0;
// }


#include <FreeImage.h>

void applyNegativeFilter(const char* inputImagePath, const char* outputImagePath) {
    // Load the image
    FIBITMAP* image = FreeImage_Load(FIF_PNG, inputImagePath, 0);

    // Get image dimensions
    int width = FreeImage_GetWidth(image);
    int height = FreeImage_GetHeight(image);

    // Iterate through each pixel and apply negative filter
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            RGBQUAD pixel;
            FreeImage_GetPixelColor(image, x, y, &pixel);

            // Apply negative filter by subtracting each channel value from 255
            pixel.rgbRed = 255 - pixel.rgbRed;
            pixel.rgbGreen = 255 - pixel.rgbGreen;
            pixel.rgbBlue = 255 - pixel.rgbBlue;

            FreeImage_SetPixelColor(image, x, y, &pixel);
        }
    }

    // Save the modified image
    FreeImage_Save(FIF_PNG, image, outputImagePath, 0);

    // Unload the image
    FreeImage_Unload(image);
}

int main() {
    const char* inputImagePath = "input.png";
    const char* outputImagePath = "output_negative.png";

    applyNegativeFilter(inputImagePath, outputImagePath);

    return 0;
}
