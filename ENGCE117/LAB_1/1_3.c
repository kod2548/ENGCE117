#include <stdio.h>

int GetSet(int *number)
{
    int i;
    int total_num = 0;
    int calculate;

    printf("Specify the number of digits to add: ");
    scanf("%d", number);

    for (i = 0; i < *number; i++)
    {
        printf("Specify the numbers you want to add [%d]: ", i + 1);
        scanf("%d", &calculate);
        total_num += calculate;
    }
    return total_num;
}

int main()
{
    int avg = 0;
    int data, num;

    data = GetSet(&num);

    printf("\n------- Calculate -------\n");
    printf("Number processing: %d\n", data);

    avg = data / num;
    printf("Average Number: %d\n", avg);
    return 0;
}