/*
    Transpose a Matrix

    One important operation on matrices is to create the transpose of a matrix

    Consider the figure below as a 3 x 4 matrix
    _________________________
    |  10 | 255 | 128 |  45 |
    |_____|_____|_____|_____|
    |  5  |  3  |  4  |  25 |
    |_____|_____|_____|_____|
    |  9  |  1  |  7  |  11 |
    |_____|_____|_____|_____|

    The operation of transposing a matrix requires rearranging the structure of
    the matrix and its values. The transpose of the matrix above can be seen below:

    ___________________
    |  10 |  5  |  9  |
    |_____|_____|_____|
    | 255 |  3  |  1  |
    |_____|_____|_____|
    | 128 |  4  |  7  |
    |_____|_____|_____|
    |  45 | 25  | 11  |
    |_____|_____|_____|

    Notice that the dimensions of the transposed matrix have been swapped, and for
    the values, the columns of the previous matrix have become the rows of transpose

    Your program will require the:
    * number of rows in the matrix
    * number of columns in the matrix
    * values for each row of the matrix

    You can enter this data manually, but the automated test data will look like this:
    
    3 4
    1 2 3 4
    6 7 8 9
    10 11 12 13

    3 and 4 are the rows and columns of the matrix respetively, and the rows of numbers are the
    matrix values. You can see this data in the .in files for the test.

    Your job is to take this input, put it into a multi-dimensional array to represent the matrix
    and then perform the transpose operation described above to create a NEW multi-dimension array
    representing the transposed matrix.

    EXAMPLE INPUT/OUTPUT:
    
    Enter the number of rows: 3  
    Enter the number of columns: 4
    Enter 4 values for row 0 (space separated): 1 2 3 4
    Enter 4 values for row 1 (space separated): 6 7 8 9
    Enter 4 values for row 2 (space separated): 10 11 12 13 

    Matrix:
    1 2 3 4 
    6 7 8 9 
    10 11 12 13 

    Transpose:
    1 6 10 
    2 7 11 
    3 8 12 
    4 9 13 

    NOTE: EACH MATRIX VALUE WHEN PRINTED HAS ONE SPACE BEFORE THE NEWLINE!
*/

#include <stdio.h>

int main() {
    
    printf("Enter the number of rows: ");
    // Get user input for the number of rows in the matrix

    printf("Enter the number of columns: ");
    // Get user input for the number of columns in the matrix

    // Create the inital matrix

    // Get user input for the values of each row in the matrix

    printf("\nMatrix:\n");
    
    // Display the original matrix

    // Create the transpose matrix

    // Perform the Transpose operation
    
    printf("\nTranspose:\n");

    // Display the transposed matrix
    
    return 0;
}
