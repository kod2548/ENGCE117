// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int zoneCode;
    float weight_kg;
    float totalCost = 0.0;

    // รับค่ารหัสโซนและน้ำหนัก
    if (scanf("%d %f", &zoneCode, &weight_kg) != 2)
    {
        return 1; // Handle input failure
    }

    // TODO: Implement the switch statement based on zoneCode,
    // and the nested if-else logic based on weight_kg.
    switch (zoneCode)
    {
    case 1:
        if (weight_kg <= 5)
        {
            totalCost = 50.0;
        }
        else
        {
            totalCost = 80.0;
        }
        break;

    case 2:
        if (weight_kg <= 10)
        {
            totalCost = 150.0;
        }
        else
        {
            totalCost = 250.0;
        }
        break;

    case 3:
        totalCost = 500;
        break;

    default:
        printf("Invalid Zone Code");
        return 0;
    }

    if (totalCost > 0.0 || zoneCode > 3 || zoneCode < 1)
    { // Check if calculation succeeded or if invalid code was found
        printf("%.2f\n", totalCost);
    }

    return 0;
}