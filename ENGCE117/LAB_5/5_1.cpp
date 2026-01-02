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

void InsertNode(struct studentNode *walk, char n[], int a, char s, float g)
{
    struct studentNode *newNode;

    newNode = &sizemax[sizemin++];
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;

    newNode->next = walk->next;
    walk->next = newNode;
}

void DelNode(struct studentNode *walk)
{
    if (walk->next == NULL)
        return;

    walk->next = walk->next->next;
}

void ShowAll(struct studentNode *walk)
{
    while (walk != NULL)
    {
        printf("%s ", walk->name);
        walk = walk->next;
    }
    printf("\n");
}

int main()
{
    struct studentNode *start, *now;
    start = NULL;

    now = AddNode(&start, "one", 6, 'M', 3.11);
    ShowAll(start);

    now = AddNode(&start, "two", 8, 'F', 3.22);
    ShowAll(start);

    InsertNode(now, "three", 10, 'M', 3.33);
    ShowAll(start);

    InsertNode(now, "four", 12, 'F', 3.44);
    ShowAll(start);

    DelNode(now);
    ShowAll(start);

    return 0;
}
