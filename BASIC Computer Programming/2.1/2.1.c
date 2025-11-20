// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int N, i;

    // รับค่า N (จำนวนรอบ)
    if (scanf("%d", &N) != 1)
    {
        return 1; // Handle input failure
    }

    // TODO: Implement the for loop to print the message N times
    if (N <= 0)
    {
        printf("Error");
    }

    for (i = 0; i < N; i++)
    {
        printf("Hello Loop!\n");
    }

    return 0;
}