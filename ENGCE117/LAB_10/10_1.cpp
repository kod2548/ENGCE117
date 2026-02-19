#include <stdio.h>

long SumLoop(int n)
{
    int i;
    long Sum = 1;
    for (i = 1; i < n; i++)
    {
        Sum *= i;
    }
    return Sum;
}

long SumRecur(int n)
{
    if (n > 1)
    {
        return n * SumRecur(n - 1);
    }
    return 1;
}

int main()
{
    printf("SumLoop(n) = %d\n", SumLoop(10));
    printf("SumRecur(n) = %d\n", SumRecur(10));
    return 0;
}
