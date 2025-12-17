#include <stdio.h>

struct student
{
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student upgrade(struct student child)
{
    if (child.sex == 'F')
    {
        child.gpa *= 1.20;
    }
    else if (child.sex == 'M')
    {
        child.gpa *= 1.10;
    }
    else
    {
        printf("Error\n");
        return child;
    }
    return child;
}

int main()
{
    struct student aboy;

    printf("Enter name: ");
    scanf("%s", aboy.name);

    printf("Enter age: ");
    scanf("%d", &aboy.age);

    printf("Enter sex: ");
    scanf(" %c", &aboy.sex);

    printf("Enter gpa: ");
    scanf("%f", &aboy.gpa);

    aboy = upgrade(aboy);

    printf("Now your gpa: %.2f", aboy.gpa);
    return 0;
}
