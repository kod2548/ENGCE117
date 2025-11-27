#include <stdio.h>

void GetSet(int array[], int *number)
{
    int i;

    printf("Enter number of members: ");
    scanf("%d", number);

    for (i = 0; i < *number; i++)
    {
        printf("Enter Member [%d]: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int main()
{
    int i, n = 100;
    int data[n], num;
    GetSet(data, &num);
    n = num;

    if (num <= 0)
    {
        printf("ERROR Invild Number\n");
        return 0;
    }

    printf("\n----- Member Report -----\n");
    printf("Member have: %d\n", num);
    for (i = 0; i < num; i++)
    {
        printf("Member [%d]: %d\n", i + 1, data[i]);
    }

    return 0;
}