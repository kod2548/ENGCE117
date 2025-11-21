// Pre-code (โค้ดบังคับ)
#include <stdio.h>

// 1. ประกาศโครงสร้าง Student
struct Student
{
    char name[50];
    int studentId;
    float score;
};

int main()
{
    int N, i;

    // 2. รับค่า N (จำนวนนักศึกษา)
    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    // 3. ประกาศตัวแปร Array ของ struct (ใช้ Variable-Sized Array)
    struct Student students[N];

    // 4. Implement the first for loop for data input
    for (i = 0; i < N; i++)
    {
        // รับค่า studentId, score, และ name
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3)
        {
            return 1;
        }
    }

    // TODO: Implement the second for loop for displaying output
    for (i = 0; i < N; i++)
    {
        // ... Print the result ...
        printf("ID: %d, Name: %s, Score: %.2f\n", students[i].studentId, students[i].name, students[i].score);
    }

    return 0;
}