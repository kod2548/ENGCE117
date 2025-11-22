#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int scores[N];
    int passSum = 0;
    int failCount = 0;

    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &scores[i]);

        if (scores[i] >= 50)
        {
            passSum = passSum + scores[i];
        }
        else
        {
            failCount++;
        }
    }

    printf("Passing Scores Sum: %d\n", passSum);
    printf("Failing Students Count: %d\n", failCount);

    return 0;
}