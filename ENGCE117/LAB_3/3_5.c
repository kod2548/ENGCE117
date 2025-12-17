#include <stdio.h>

struct student
{
    char name[20];
    int age;
    char sex;
};

struct student (*GetStudent(int *room))[10]
{
    int i, j;

    static struct student data[20][10];

    printf("Enter number of room: ");
    scanf("%d", room);

    for (i = 0; i < *room; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Room %d Student %d name: ", i + 1, j + 1);
            scanf("%s", data[i][j].name);

            printf("Room %d Student %d age: ", i + 1, j + 1);
            scanf("%d", &data[i][j].age);

            printf("Room %d Student %d sex: ", i + 1, j + 1);
            scanf(" %c", &data[i][j].sex);

            printf("\n");
        }
    }

    return data;
}

int main()
{
    int i, j;

    struct student(*children)[10];
    int group;
    children = GetStudent(&group);

    for (i = 0; i < group; i++)
    {
        printf("group %d\n", i + 1);
        for (j = 0; j < 10; j++)
        {
            printf("Student %d name: %s\n", j + 1, children[i][j].name);

            printf("Student %d age: %d\n", j + 1, children[i][j].age);

            printf("Student %d sex: %c\n", j + 1, children[i][j].sex);

            printf("\n");
        }
    }

    return 0;
}
