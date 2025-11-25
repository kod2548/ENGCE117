#include <stdio.h>

#define SIZE 5

void print_array(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sort_array_ascending(int array[], int size)
{
    int i, j, filter;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                filter = array[j];
                array[j] = array[j + 1];
                array[j + 1] = filter;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int numbers[SIZE];
    int original_copy[SIZE];
    int i;

    printf("Enter %d integer numbers for sorting:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
        original_copy[i] = numbers[i];
    }

    printf("\n--- ARRAY SORTING REPORT ---\n");

    printf("Original Array: ");
    print_array(original_copy, SIZE);

    printf("Sorted Array (Ascending): ");
    sort_array_ascending(numbers, SIZE);
    return 0;
}