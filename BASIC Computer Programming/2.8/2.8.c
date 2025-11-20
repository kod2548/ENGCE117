// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main()
{
    int N, i;
    int studentId, score, totalClasses, absentClasses;
    float attendancePercent;
    int passCount = 0;
    int failCount = 0;

    // รับค่า N (จำนวนนักเรียน)
    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    if (N < 0)
    {
        printf("Error");
        return 0;
    }

    // TODO: Implement the for loop (N times)
    for (i = 0; i < N; i++)
    {
        // 1. รับค่า 4 ตัวแปร
        if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4)
        {
            break;
        }

        // 2. คำนวณเปอร์เซ็นต์การเข้าเรียน (ใช้ float)
        attendancePercent = (float)(totalClasses - absentClasses) / totalClasses * 100.0;

        // 3. Implement the complex decision logic and print status/reason.
        // (Use compound conditions && and ||)
        if (score >= 50 && score <= 100 && attendancePercent >= 75 && attendancePercent <= 100)
        {
            printf("Student %d: PASS\n", studentId);
            passCount++;
        }
        else if (score >= 50 && score <= 100 && attendancePercent >= 0 && attendancePercent <= 74)
        {
            printf("Student %d: FAIL - Low Attendance\n", studentId);
            failCount++;
        }
        else if (score >= 0 && score <= 49 && attendancePercent >= 75 && attendancePercent <= 100)
        {
            printf("Student %d: FAIL - Low Score\n", studentId);
            failCount++;
        }
        else if (score >= 0 && score <= 49 && attendancePercent >= 0 && attendancePercent <= 74)
        {
            printf("Student %d: FAIL - Both Score and Attendance\n", studentId);
            failCount++;
        }
        else
        {
            printf("Error");
            return 0;
        }
    }

    printf("--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);
    return 0;
}