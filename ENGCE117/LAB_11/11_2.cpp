#include <stdio.h>

void merge(int *u, int m, int *v, int n, int *t)
{
    int i = 0, j = 0;

    for (int k = 0; k < (m + n); k++)
    {
        if (i >= m)
        {
            t[k] = v[j++];
        }
        else if (j >= n)
        {
            t[k] = u[i++];
        }
        else if (u[i] < v[j])
        {
            t[k] = u[i++];
        }
        else
        {
            t[k] = v[j++];
        }
    }
}

void mergesort(int t[], int k)
{
    if (k > 1)
    {
        int n = k / 2;

        int u[n];
        int v[k - n];

        for (int i = 0; i < n; i++)
            u[i] = t[i];

        for (int i = n; i < k; i++)
            v[i - n] = t[i];

        mergesort(u, n);
        mergesort(v, k - n);

        merge(u, n, v, k - n, t);
    }
}

int main()
{
    int data[7] = {4, 6, 1, 2, 5, 1, 8};
    int n = 7;
    mergesort(data, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
