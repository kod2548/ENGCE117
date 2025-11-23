#include <stdio.h>

int main()
{

    int n = 5;
    int s[5];
    int i;
    int total = 0;
    float avg;
    int countMore = 0;

    for (i = 0; i < n; i++)
    {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &s[i]);

        total = total + s[i];
    }

    avg = total * 1.0 / n;

    printf("\nRecorded Scores: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", s[i]);

        if (s[i] > avg)
        {
            countMore = countMore + 1;
        }
    }

    printf("\nTotal Sum: %d\n", total);
    printf("Average Score: %.2f\n", avg);
    printf("Number of Scores Above Average: %d\n", countMore);

    return 0;
}
