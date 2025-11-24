#include <stdio.h>

int main()
{
    const int ROWS = 2, COLS = 4;
    int matrix[ROWS][COLS];
    int total_sum = 0;
    int i, j;

    printf("Enter %d integer numbers for the 2x4 maxtrix:\n", ROWS * COLS);

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n--- 2D ARRAY SUMMATION REPORT ---\n");
    printf("Array Size: %d Rows x %d Columns\n", ROWS, COLS);

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
            total_sum += matrix[i][j];
        }
        printf("\n");
    }
    printf("Total Sum of all elements: %d", total_sum);
    return 0;
}
