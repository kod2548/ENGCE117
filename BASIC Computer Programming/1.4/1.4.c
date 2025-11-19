#include <stdio.h>

int main()
{
    int N, sum = 0, i;

    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    for (i = 0; i <= N; i++)
    {
        sum += i;
    }

    if (N >= 0)
    {
        printf("%d\n", sum);
    }
    else
    {
        printf("Error");
    }

    return 0;
}