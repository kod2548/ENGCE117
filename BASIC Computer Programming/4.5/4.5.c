#include <stdio.h>

int main()
{
    int SIZE = 6;
    int data[SIZE];
    int total_sum = 0;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter interger number %d: ", i + 1);
        scanf("%d", &data[i]);
        total_sum += data[i];
    }

    printf("\n--- SUMMATION REPORT ---\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("Total Sum of Numbers: %d\n", total_sum);
    return 0;
}
