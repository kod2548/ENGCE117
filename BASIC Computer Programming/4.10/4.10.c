#include <stdio.h>

int main()
{
    const int ROWS = 3, COLS = 3;
    int data[ROWS][COLS];
    int i, j;

    printf("Enter %d integer numbers for the 3x3 array: \n", ROWS * COLS);

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &data[i][j]);
        }
    }

    printf("\n--- TWO-DIMENSIONAL ARRAY REPORT ---\n");
    printf("Array Size: %d Rows x %d Columns\n", ROWS, COLS);
    printf("Content (Table Format):\n");

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", data[i][j]);
        }
        printf("\n");
    }
    return 0;
}
