// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int N, i, quantity;
    float unitPrice, itemCost, grandTotal = 0.0;

    // รับค่า N (จำนวนรายการ)
    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    // TODO: Implement the for loop (N times)
    // TODO: Inside the loop, receive unitPrice and quantity
    // TODO: Implement the if-else discount logic and accumulate grandTotal
    for (i = 0; i < N; i++)
    {
        if (scanf("%f", &unitPrice) != 1)
        {
            return 1;
        }

        if (scanf("%d", &quantity) != 1)
        {
            return 1;
        }
        if (quantity <= 0)
        {
            printf("Error");
            return 0;
        }

        if (unitPrice >= 1000.0)
        {
            itemCost = unitPrice * 0.9 * quantity;
        }
        else
        {
            itemCost = unitPrice * quantity;
        }

        grandTotal += itemCost;
    }

    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}