#include <stdio.h>

int BinSearch(int data[], int n, int find)
{
    int pos, m;
    int i = 0;
    int j = n - 1;

    while (i <= j)
    {
        int m = i + (j - i) / 2;

        if (data[m] == find)
            return m;

        if (data[m] < find)
            i = m + 1;
        else
            j = m - 1;
    }
    return pos;
}

int main()
{
    int data[6] = {1, 2, 3, 4, 5, 7};
    int n = 6, find = 5;
    int pos = BinSearch(data, n, find);
    printf("Found %d at %d\n", find, pos);
    return 0;
}