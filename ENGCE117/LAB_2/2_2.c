#include <stdio.h>

char *reverse(char str1[])
{
    int i;
    int len = 0;
    static char Word[50];

    while (str1[len] != '\0')
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        Word[i] = str1[len - 1 - i];
    }

    Word[len] = '\0';

    return Word;
}

int main()
{
    char text[50];
    char *out;

    printf("Insert Word: ");
    scanf(" %99[^\n]", &text);

    out = reverse(text);

    printf("%s\n", out);

    return 0;
}
