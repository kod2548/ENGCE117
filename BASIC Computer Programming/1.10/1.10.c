// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int clearanceLevel, age, isActive;

    // รับค่าระดับ, อายุ และสถานะ
    if (scanf("%d %d %d", &clearanceLevel, &age, &isActive) != 3)
    {
        return 1; // Handle input failure
    }

    // TODO: Implement the if-else logic using compound conditions (&& and ||)
    if ((clearanceLevel == 3 && isActive == 1) || (clearanceLevel == 2 && age >= 25 && isActive == 1))
    {
        printf("Access GRANTED\n");
    }
    else
    {
        printf("Access Denied\n");
    }

    return 0;
}