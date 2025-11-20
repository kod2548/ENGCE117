// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int score;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    // รับค่าคะแนนตัวแรก
    if (scanf("%d", &score) != 1)
    {
        return 1;
    }

    // TODO: Implement the while loop (while score != -1)
    while (score != -1)
    {
        // TODO: Implement the cascading if-else if-else logic
        // to determine the grade and increment the correct counter.
        if (score >= 80 && score <= 100)
        {
            countA = countA + 1;
        }
        else if (score >= 70 && score <= 79)
        {
            countB = countB + 1;
        }
        else if (score >= 60 && score <= 69)
        {
            countC = countC + 1;
        }
        else if (score >= 50 && score <= 59)
        {
            countD = countD + 1;
        }
        else if (score >= 0 && score <= 49)
        {
            countF = countF + 1;
        }
        else
        {
            printf("Error");
            return 0;
        }

        // ต้องรับค่าคะแนนถัดไปที่ท้ายลูป
        if (scanf("%d", &score) != 1)
        {
            break;
        }
    }

    printf("Grade A Count: %d\n", countA);
    printf("Grade B Count: %d\n", countB);
    printf("Grade C Count: %d\n", countC);
    printf("Grade D Count: %d\n", countD);
    printf("Grade F Count: %d\n", countF);
    return 0;
}