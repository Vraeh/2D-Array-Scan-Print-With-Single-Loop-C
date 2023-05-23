#include <stdio.h>

// Define constants for the array, using uppercase letters to distinguish them.
// We'll use a 3x3 array (a square with 3 rows and 3 columns).
#define ROWS 3
#define COLUMNS 3

int main()
{
    int array[ROWS][COLUMNS];            // Define the two-dimensional array.
    int total_elements = ROWS * COLUMNS; // Since it's a two-dimensional array, we can get the total number of elements by multiplying the dimensions (rows * columns).
    int i;                               // Define a counter to use in the loop.

    printf("Enter the values for the array with %d rows and %d columns:\n", ROWS, COLUMNS);

    for (i = 0; i < total_elements; i++) // Iterate over the total number of elements in the array.
    {
        int row = i / COLUMNS;    // Get the row by dividing the index by the number of columns.
        int column = i % COLUMNS; // Get the column by calculating the remainder of the index divided by the number of columns.

        printf("Enter the value for element [%d][%d]: ", row, column);
        scanf("%d", &array[row][column]); // Store the value at the corresponding index, and repeat the loop until all elements are filled.
    }

    printf("\n");
    printf("The entered array is:\n");

    // Iterate over the total number of elements in the array, same as the previous loop, but now to display the values on the screen.
    for (i = 0; i < total_elements; i++)
    {
        int row = i / COLUMNS;
        int column = i % COLUMNS;
        int array_value = array[row][column]; // Get the value of the array at the corresponding index.

        printf("%d ", array_value);
    }

    printf("\n");

    return 0;
}
