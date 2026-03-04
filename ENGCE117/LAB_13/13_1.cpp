#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int *KnapsackDP(int *w, int *v, int n, int wx)
{
    int **u = (int **)malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++)
        u[i] = (int *)malloc((wx + 1) * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= wx; j++)
        {
            if (i == 0)
            {
                if (w[i] <= j)
                    u[i][j] = v[i];
                else
                    u[i][j] = 0;
            }
            else
            {
                if (w[i] > j)
                    u[i][j] = u[i - 1][j];
                else
                    u[i][j] = max(u[i - 1][j], u[i - 1][j - w[i]] + v[i]);
            }
        }
    }

    int *x = (int *)calloc(n, sizeof(int));

    int j = wx;

    for (int i = n - 1; i > 0; i--)
    {
        if (u[i][j] != u[i - 1][j])
        {
            x[i] = 1;
            j -= w[i];
        }
    }

    if (u[0][j] != 0)
    {
        x[0] = 1;
    }

    for (int i = 0; i < n; i++)
        free(u[i]);
    free(u);

    return x;
}

int main()
{
    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};
    int *x;

    x = KnapsackDP(w, v, n, wx);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }

    free(x);
    return 0;
}