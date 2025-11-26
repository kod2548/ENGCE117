#include <stdio.h>

int main()
{
    const char *FILENAME = "input_data.csv";

    FILE *fptr;
    int num1, num2, num3, num4, num5;
    int total_sum;

    fptr = fopen(FILENAME, "r");

    if (fptr == NULL)
    {
        printf("ERROR: Could not open file %s for writing.\n", FILENAME);
        return 0;
    }

    printf("--- FILE WRITING PROCESS ---\n");
    printf("Reading data to %s...\n", FILENAME);

    fscanf(fptr, "%d,%d,%d,%d,%d", &num1, &num2, &num3, &num4, &num5);

    total_sum = num1 + num2 + num3 + num4 + num5;

    fclose(fptr);

    printf("File reading complete.\n");
    printf("\n--- DATA ANALYSIS REPORT ---\n");
    printf("Data read: %d, %d, %d, %d, %d\n", num1, num2, num3, num4, num5);
    printf("total_sum: %d\n", total_sum);
    return 0;
}
