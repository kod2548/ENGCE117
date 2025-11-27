#include <stdio.h>

void GetMatrix(int value[], int *row, int *col)
{
    int i, j;
    int calculate_matrix = 0;

    printf("Enter row size: ");
    scanf("%d", row);

    printf("Enter row col: ");
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

    printf("Row Size: %d, Col Size: %d\n", *row, *col);

    for (i = 0; i < *row; i++)
    {
        for (j = 0; j < *col; j++)
        {
            printf("%d ", value[i * *col + j]);
        }
        printf("\n");
    }

    printf("Calculate: %d\n", calculate_matrix);
}

int main()
{
    int i, k;
    int m, n;
    int even_count = 0;
    int odd_count = 0;
    int data[1000];
    GetMatrix(data, &m, &n);

    for (i = 0; i < m; i++)
    {
        for (k = 0; k < n; k++)
        {
            if (data[i * n + i] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
    }
    printf("Have even number: %d\n", even_count);
    printf("Have odd number: %d\n", odd_count);

    return 0;
}