#include <stdio.h>
#include <string.h>

struct studentNode
{
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

struct studentNode sizemax[5];
int sizemin = 0;

struct studentNode *AddNode(struct studentNode **start, char n[], int a, char s, float g)
{
    struct studentNode *newNode, *walk;

    newNode = &sizemax[sizemin++];
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;
    newNode->next = NULL;

    if (*start == NULL)
    {
        *start = newNode;
    }
    else
    {
        walk = *start;
        while (walk->next != NULL)
            walk = walk->next;
        walk->next = newNode;
    }

    return newNode;
}

void InsertNode(struct studentNode **now, char n[], int a, char s, float g)
{
    struct studentNode *newNode;

    newNode = &sizemax[sizemin++];
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;

    newNode->next = *now;
    *now = newNode;
}

void DelNode(struct studentNode **now)
{
    if (*now == NULL)
        return;

    *now = (*now)->next;
}

void ShowAll(struct studentNode **now)
{
    while (*now != NULL)
    {
        printf("%s ", (*now)->name);
        now = &(*now)->next;
    }
    printf("\n");
}

void GoNext(struct studentNode ***now)
{
    if (**now != NULL)
    {
        *now = &(**now)->next;
    }
}

int main()
{
    struct studentNode *start, **now;
    start = NULL;
    now = &start;

    InsertNode(now, "one", 6, 'M', 3.11);
    ShowAll(&start);

    InsertNode(now, "two", 8, 'F', 3.22);
    ShowAll(&start);

    GoNext(&now);

    InsertNode(now, "three", 10, 'M', 3.33);
    ShowAll(&start);

    InsertNode(now, "four", 12, 'F', 3.44);
    ShowAll(&start);

    GoNext(&now);

    DelNode(now);
    ShowAll(&start);

    return 0;
}
