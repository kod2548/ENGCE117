#include <stdio.h>

int GetMatrix(int *row, int *col)
{
    int i, j;
    int value[1000];
    int calculate_matrix = 0;

    printf("Enter row size: ");
    scanf("%d", row);

    printf("Enter col size: ");
    scanf("%d", col);

    for (i = 0; i < *row; i++)
    {
        for (j = 0; j < *col; j++)
        {
            printf("Insert number in data [%d][%d]: ", i, j);
            scanf("%d", &value[i * *col + j]);
            calculate_matrix += value[i * *col + j];
        }
    }

    printf("\n------- Matrix Report -------\n");

    for (i = 0; i < *row; i++)
    {
        for (j = 0; j < *col; j++)
        {
            printf("%d ", value[i * *col + j]);
        }
        printf("\n");
    }
    return calculate_matrix;
}

int main()
{
    int data, m, n;
    data = GetMatrix(&m, &n);

    printf("Row Size: %d, Col Size: %d\n", m, n);
    printf("Calculate: %d\n", data);

    return 0;
}