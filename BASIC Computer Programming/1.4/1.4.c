// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int N, sum = 0, i;

    // รับค่า N
    if (scanf("%d", &N) != 1)
    {
        return 1; // Handle input failure
    }

    // TODO: Implement the for loop to calculate the sum from 1 to N
    for (i = 0; i <= N; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);
    return 0;
}