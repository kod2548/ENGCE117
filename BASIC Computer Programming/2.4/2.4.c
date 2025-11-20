// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    float principal, monthlyPayment, interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;

    // รับค่ายอดหนี้เริ่มต้น และยอดชำระรายเดือน
    if (scanf("%f %f", &principal, &monthlyPayment) != 2)
    {
        return 1;
    }

    // TODO: Implement the while loop structure (while principal > 0)
    // TODO: Implement the calculation and nested if-else logic for PENALTY
    while (principal > 0)
    {
        monthCount++;
        interest = principal * INTEREST_RATE;
        principal = principal + interest;
        if (monthlyPayment < interest)
        {
            principal = principal + PENALTY;
        }
        principal = principal - monthlyPayment;
        printf("Month %d: Remaining %.2f\n", monthCount, principal);
        if (monthCount == 10)
        {
            printf("Loan settled in 10+ months.\n");
            return 0;
        }
    }

    printf("Loan settled in %d months.\n", monthCount);
    return 0;
}