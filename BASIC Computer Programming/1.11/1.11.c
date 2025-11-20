#include <stdio.h>

int main()
{
    int categoryCode;
    float price_before_vat;
    float totalBill = 0.0;
    float vatAmount = 0.0;

    // รับค่าราคาก่อน VAT และรหัสหมวดหมู่
    if (scanf("%f %d", &price_before_vat, &categoryCode) != 2)
    {
        return 1; // Handle input failure
    }

    // TODO: Implement the switch statement based on categoryCode,
    // and perform the necessary float calculations inside each case.
    switch (categoryCode)
    {
    // VAT 7%
    case 1:
        totalBill = price_before_vat * 1.07;
        break;

    // VAT 0%
    case 2:
        totalBill = price_before_vat;
        break;

    // VAT 15%
    case 3:
        totalBill = price_before_vat * 1.15;
        break;

    default:
        totalBill = 0.0;
        break;
    }

    if (categoryCode >= 1 && categoryCode <= 3)
    {
        vatAmount = totalBill - price_before_vat;
        printf("VAT Amount: %.2f\n", vatAmount);
        printf("Total Price: %.2f\n", totalBill);
    }
    else
    {
        printf("Invalid Category\n");
        printf("Total Price: %.2f\n", totalBill);
    }

    return 0;
}
