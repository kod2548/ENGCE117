#include <stdio.h>

int main()
{
    int num1, num2, operationCode, result;

    if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3)
    {
        return 1;
    }

    if (operationCode <= 0 || operationCode > 4)
    {
        printf("Error\n");
    }

    switch (operationCode)
    {
    case 1:
        result = num1 + num2;
        printf("%d", result);
        break;

    case 2:
        result = num1 - num2;
        printf("%d", result);
        break;

    case 3:
        result = num1 * num2;
        printf("%d", result);
        break;

    case 4:
        result = num1 / num2;
        printf("%d", result);
        break;

    default:
        break;
    }

    return 0;
}