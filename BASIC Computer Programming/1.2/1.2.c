#include <stdio.h>

int main()
{
    int score;
    if (scanf("%d", &score) != 1)
    {
        return 1;
    }
    if (score > 100)
    {
        printf("Error\n");
    }
    else if (score >= 80)
    {
        printf("Grade A\n");
    }
    else if (score >= 70 && score <= 79)
    {
        printf("Grade B\n");
    }
    else if (score >= 60 && score <= 69)
    {
        printf("Grade C\n");
    }
    else if (score >= 50 && score <= 59)
    {
        printf("Grade D\n");
    }
    else if (score >= 0 && score < 50)
    {
        printf("Grade F\n");
    }
    else
    {
        printf("Error\n");
    }
    return 0;
}