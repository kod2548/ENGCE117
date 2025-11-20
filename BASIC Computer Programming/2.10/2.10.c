// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int N_PERIODS, cmdCode, i;
    float initialBalance, PENALTY_FEE, amount;
    float currentBalance;
    float totalPenalties = 0.0;

    // 1. รับค่าเริ่มต้น 3 ค่า
    if (scanf("%f %f %d", &initialBalance, &PENALTY_FEE, &N_PERIODS) != 3)
    {
        return 1;
    }
    currentBalance = initialBalance;

    printf("Starting Balance: %.2f\n", initialBalance);

    // TODO: Implement the for loop (N_PERIODS times)
    for (i = 1; i <= N_PERIODS; i++)
    {
        // 2. รับค่า cmdCode และ amount
        if (scanf("%d %f", &cmdCode, &amount) != 2)
        {
            break;
        }

        // 3. Implement the switch statement with nested if-else logic.
        printf("--- Month %d ---\n", i);
        // ... Logic goes here ...
        switch (cmdCode)
        {
        case 1:
            currentBalance += amount;
            printf("Deposit: %.2f\n", amount);
            break;

        case 2:
            if (amount <= currentBalance)
            {
                currentBalance -= amount;
                printf("Withdrawal: %.2f\n", amount);
            }
            else if (amount > currentBalance)
            {
                totalPenalties += PENALTY_FEE;
                printf("WITHDRAWAL FAILED. Penalty %.2f applied\n", PENALTY_FEE);
            }
            break;

        case 3:
            float APR;
            float interest;
            if (currentBalance < 1000)
            {
                APR = 1.0;
            }
            else
            {
                APR = 2.5;
            }
            interest = currentBalance * (APR / 12.0);
            currentBalance += interest;
            printf("Interest: %.2f (Rate: %.2f%%)\n", interest, APR);
            break;

        default:
            printf("Error: Imvalid Command\n");
            return 0;
        }
    }

    printf("Final Balance: %.2f\n", currentBalance);
    printf("Total Penalties: %.2f\n", totalPenalties);
    return 0;
}