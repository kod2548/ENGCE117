#include <stdio.h>

int *Dijkstra(int *L, int n)
{
    int i, j, k;
    int C[5];
    int size = n - 1;
    int *D = new int[n];

    for (i = 1; i < n; i++)
        C[i - 1] = i;

    for (i = 1; i < n; i++)
    {
        if (L[0 * n + i] == -1)
            D[i] = 100;
        else
            D[i] = L[0 * n + i];
    }

    for (k = 0; k < n - 2; k++)
    {
        int min = 100;
        int minIndex = -1;
        int v;

        for (i = 0; i < size; i++)
        {
            if (D[C[i]] < min)
            {
                min = D[C[i]];
                minIndex = i;
            }
        }

        v = C[minIndex];

        for (i = minIndex; i < size - 1; i++)
            C[i] = C[i + 1];
        size--;

        for (i = 0; i < size; i++)
        {
            int w = C[i];

            if (L[v * n + w] != -1)
            {
                if (D[w] > D[v] + L[v * n + w])
                {
                    D[w] = D[v] + L[v * n + w];
                }
            }
        }
    }

    return D + 1;
}

int main()
{
    int n = 5, i = 0, j = 0, *d, *g;
    g = new int[n * n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            g[i * n + j] = -1;
        }
    }

    g[0 * n + 1] = 100;
    g[0 * n + 2] = 80;
    g[0 * n + 3] = 30;
    g[0 * n + 4] = 10;

    g[1 * n + 2] = 20;
    g[3 * n + 1] = 20;
    g[3 * n + 2] = 20;
    g[4 * n + 3] = 10;

    d = Dijkstra(g, n);
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", d[i]);
    }
    return 0;
}