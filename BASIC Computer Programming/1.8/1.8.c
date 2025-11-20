// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int dayCode, hour;

    // รับค่ารหัสวันและชั่วโมง
    if (scanf("%d %d", &dayCode, &hour) != 2)
    {
        return 1; // Handle input failure
    }

    // TODO: Implement the main switch statement with nested if-else logic inside cases 1-5
    switch (dayCode)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        if (hour >= 8 && hour <= 17)
        {
            printf("System Running (Workday)\n");
        }
        else
        {
            printf("System Idle (Off-hours)\n");
        }
        break;

    case 6:
    case 7:
        printf("Weekend Relax Mode\n");
        break;

    default:
        printf("Invalid Day Code\n");
        break;
    }

    return 0;
}