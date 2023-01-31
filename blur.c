/*
    Image Bluring

    A simple method to blur an image is to change every pixel
    in an image to be the average of the pixel values that surround
    it (including that value itself).

    Consider the figure below of an image that is 3 pixels high
    and 4 pixels wide. Each pixel represents a grayscale value from
    0 (black) to 255 (white).
    _________________________
    |  10 | 255 | 128 |  45 |
    |_____|_____|_____|_____|
    |  5  |  3  |  4  |  25 |
    |_____|_____|_____|_____|
    |  9  |  1  |  7  |  11 |
    |_____|_____|_____|_____|

    Lets assume that we want to blur the pixel with the value 3. To do
    so, we need to find the average of that pixel value and the neighboring pixels
    that are above, below, left, and right of that pixel. The result that replaces
    the pixel with value 3 will be:

    10 + 255 + 128 + 5 + 3 + 4 + 9 + 1 + 7 = 422 / 9 = 46

    Notice that we truncate (drop/ignore) the floating portion of the division. This
    is because pixels can only be postive integer values. Be aware that you will have
    to be CAREFUL AROUND THE EDGES of the image. For example, if we want to blur the
    pixel with value 10, we only use the values 10, 255, 5, 3 as there are no neighbors
    to the left or above that pixel. The result is then:

    10 + 255 + 5 + 3 = 273 = 68

    Your program will require the:
    * height of the image
    * width of the image
    * the values for each row of the image

    You can enter this data manually, but the automated test data will look like this:
    
    3 4
    1 2 3 4 
    6 7 8 9 
    10 11 12 13 

    3 and 4 are the height and width respetively, and the rows of numbers are the pixel
    values. You can see this data in the .in files for the test.

    Your job is to take this input, put it into a multi-dimensional array and then perform
    the bluring algorithm described above to create a NEW multi-dimension array with the
    blurred values

    EXAMPLE INPUT/OUTPUT:
    
    Enter image height: 3
    Enter image width: 4
    Enter pixel values for row 0 (space separated): 1 2 3 4
    Enter pixel values for row 1 (space separated): 6 7 8 9
    Enter pixel values for row 2 (space separated): 10 11 12 13

    Blurred Image
    4 4 5 6 
    6 6 7 8 
    8 9 10 10 

    Some of the output along with a basic outline to approach
    the problem is presented below. Use this to guide you.
    YOU DO NOT NEED TO CHANGE THE LINES OF CODE PROVIDED.

    NOTE: EACH IMAGE VALUE WHEN PRINTED HAS ONE SPACE BEFORE THE NEWLINE!
*/

#include <stdio.h>

int main() {
    
    printf("Enter image height: ");
    
    // Collect the height from the user
    
    printf("Enter image width: ");
    
    // Collect the width from the user

    // Create the input array

    // Initialize the array with image data from user input

    // Create the output array

    // Perfrom the blurring algorithm
    
    printf("\nBlurred Image\n");
    
    // Display the blurred image data

    return 0;
}
