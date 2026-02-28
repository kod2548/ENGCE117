#include <stdio.h>
#include <stdlib.h>

int *KnapsackGreedy(int *w, int *v, int n, int wx)
{
    int *x = (int *)malloc(n * sizeof(int));
    int *used = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        x[i] = 0;
        used[i] = 0;
    }

    int weight = 0;

    while (weight < wx)
    {
        int best = -1;
        float best_ratio = -1.0;

        for (int i = 0; i < n; i++)
        {
            if (!used[i])
            {
                float ratio = (float)v[i] / w[i];
                if (ratio > best_ratio)
                {
                    best_ratio = ratio;
                    best = i;
                }
            }
        }

        if (best == -1)
            break;

        used[best] = 1;

        if (weight + w[best] <= wx)
        {
            x[best] = 1;
            weight += w[best];
        }
    }

    free(used);
    return x;
}

int main()
{
    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};

    int *x = KnapsackGreedy(w, v, n, wx);

    for (int i = 0; i < n; i++)
        printf("%d ", x[i]);

    free(x);
    return 0;
}