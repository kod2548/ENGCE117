#include <stdio.h>

void increase_value(int *number_ptr)
{
    *number_ptr += 10;
}

int main()
{
    int data;

    printf("Enter initial integer value: ");
    scanf("%d", &data);

    printf("\n--- POINTER MODIFICATIOB REPORT ---\n");
    printf("1. Value BEFORE function call: %d\n", data);

    increase_value(&data);

    printf("2. Value AFTER function call: %d\n", data);
    return 0;
}
