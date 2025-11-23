#include <stdio.h>

int main()
{
    const int MAX_SIZE = 10;
    int data[MAX_SIZE];
    int status[MAX_SIZE];
    int N;
    int i, j;
    int count;
    const int UNVISITED = -1;
    int VISITED = 1;

    for (i = 0; i < MAX_SIZE; i++)
    {
        status[i] = UNVISITED;
    }

    printf("Enter the number of elements (N, maxn %d): ", MAX_SIZE);
    scanf("%d", &N);

    if (N > MAX_SIZE || N < 1)
    {
        N = MAX_SIZE;
    }

    printf("Enter %d integer numbers: \n", N);
    for (i = 0; i < N; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\n--- FREQUENCY ANALYSIS REPORT ---\n");
    printf("Total elements recorded (N): %d\n", N);
    printf("Recorded Numbers: ");

    for (i = 0; i < N; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");
    printf("--- FREQUENCY TABLE ---\n");
    printf("Number | Frequency\n");
    printf("-------|----------\n");

    for (i = 0; i < N; i++)
    {
        if (status[i] == VISITED)
        {
            continue;
        }

        count = 1;

        for (j = i + 1; j < N; j++)
        {
            if (data[j] == data[i])
            {
                count++;
                status[j] = VISITED;
            }
        }

        printf("%6d | %d\n", data[i], count);
    }
    return 0;
}
