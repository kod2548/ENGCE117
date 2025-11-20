// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int N_MONTHS, month, successCount = 0;
    float dailyDeposit, monthlyTotal;

    // รับค่า N_MONTHS
    if (scanf("%d", &N_MONTHS) != 1)
    {
        return 1;
    }

    // TODO: Implement the outer for loop (for months)
    for (month = 1; month <= N_MONTHS; month++)
    {
        monthlyTotal = 0.0;

        // TODO: Receive the first dailyDeposit
        if (scanf("%f", &dailyDeposit) != 1)
        {
            break;
        }

        // TODO: Implement the inner while loop (while dailyDeposit != 0.00)
        while (dailyDeposit != 0.00)
        {
            // ... Accumulation and next input logic ...
            monthlyTotal = monthlyTotal + dailyDeposit;

            if (scanf("%f", &dailyDeposit) != 1)
            {
                break;
            }
        }

        if (monthlyTotal >= 500)
        {
            successCount++;
        }

        // TODO: Implement the final if-else logic to check the 500.00 threshold
        printf("Month %d Total: %.2f\n", month, monthlyTotal);
    }

    printf("Success Count: %d\n", successCount);
    return 0;
}