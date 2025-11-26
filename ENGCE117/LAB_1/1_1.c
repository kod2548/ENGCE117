#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter Loop Numbe: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("[%d] Hello World\n", i + 1);
    }

    return 0;
}
