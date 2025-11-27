#include <stdio.h>

int GetSet(int arr[], int size)
{
    int i;
    int calculate = 0;

    for (i = 0; i < size; i++)
    {
        printf("Enter number [%d]: ", i + 1);
        scanf("%d", &arr[i]);
        calculate += arr[i];
    }

    return calculate;
}

int main()
{
    int i, n;
    int even_count = 0;
    int odd_count = 0;

    printf("Enter Number Size: ");
    scanf("%d", &n);

    if (n == 0)
    {
        return 0;
    }
    else if (n < 0)
    {
        printf("ERROR Invild Number\n");
        return 0;
    }

    int data[n];
    int num;
    num = GetSet(data, n);

    printf("\n------- Report -------\n");
    printf("Total: %d\n", num);

    for (i = 0; i < n; i++)
    {
        if (data[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Have even number: %d\n", even_count);
    printf("Have odd number: %d\n", odd_count);

    return 0;
}