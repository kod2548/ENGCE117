#include <stdio.h>

int main()
{
    int N, i;
    if (scanf("%d", &N) != 1)
    {
        return 1;
    }
    if (N <= 0)
        printf("The number is incorrect\n");
    for (i = 0; i < N; i++)
    {
        printf("Hello Loop!\n");
    }
    return 0;
}