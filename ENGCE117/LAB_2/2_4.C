#include <stdio.h>

void explode(char str1[], char splitter, char str2[][10], int *count)
{
    int i = 0;
    int row = 0;
    int col = 0;

    *count = 0;

    while (str1[i] != '\0')
    {
        if (str1[i] == splitter)
        {
            str2[row][col] = '\0';
            row++;
            col = 0;
            (*count)++;
        }
        else
        {
            str2[row][col] = str1[i];
            col++;
        }
        i++;
    }
    str2[row][col] = '\0';
    (*count)++;
}

int main()
{
    int i;
    char in[100];
    char out[20][10];
    int num;

    printf("Insert Word: ");
    scanf(" %99[^\n]", in);

    explode(in, '/', out, &num);

    for (i = 0; i < num; i++)
    {
        printf("%s\n", out[i]);
    }

    printf("Count: %d\n", num);
    return 0;
}
