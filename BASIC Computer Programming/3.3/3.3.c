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
    float totalscore = 0.0, average;

    // 2. รับค่า N (จำนวนนักศึกษา)
    if (scanf("%d", &N) != 1)
    {
        return 1;
    }

    if (N <= 0)
    {
        if (N == 0)
        {
            printf("Average Score: 0.00\n");
            return 0;
        }
        else
        {
            printf("Error");
            return 0;
        }
    }

    struct Student students[N];

    for (i = 0; i < N; i++)
    {
        // รับค่า studentId, score, และ name
        if (scanf("%d %f %s", &students[i].studentId, &students[i].score, students[i].name) != 3)
        {
            return 1;
        }

        if (students[i].score < 0)
        {
            printf("Error");
            return 0;
        }

        totalscore += students[i].score;
    }

    average = totalscore / N;

    printf("Average Score: %.2f\n", average);
    return 0;
}