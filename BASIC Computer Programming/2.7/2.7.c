// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int N, i;
    int countFizzBuzz = 0;
    int countFizz = 0;
    int countBuzz = 0;
    int countOther = 0;

    // รับค่า N
    if (scanf("%d", &N) != 1)
    {
        return 1; // Handle input failure
    }

    // TODO: Implement the for loop from i=1 to i=N.
    // TODO: Implement the cascading if-else if-else logic inside the loop
    // using the modulo operator (%).
    for (i = 1; i <= N; i++)
    {
        if (i % 15 == 0)
        {
            countFizzBuzz++;
        }
        else if (i % 3 == 0)
        {
            countFizz++;
        }
        else if (i % 5 == 0)
        {
            countBuzz++;
        }
        else
        {
            countOther++;
        }
    }

    printf("Count FizzBuzz (by 15): %d\n", countFizzBuzz);
    printf("Count Fizz (by 3 only): %d\n", countFizz);
    printf("Count Buzz (by 5 only): %d\n", countBuzz);
    printf("Count Other: %d\n", countOther);
    return 0;
}