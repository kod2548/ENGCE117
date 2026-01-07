#include <cstdio>
#include <cstring>

struct studentNode
{
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
    struct studentNode *back;
};

void ShowAll(struct studentNode *walk)
{
    while (walk != 0)
    {
        printf("Student Name: %s, Age: %d, Sex: %c, Grade: %.2f\n", walk->name, walk->age, walk->sex, walk->gpa);
        walk = walk->next;
    }
    printf("\n");
}

void GoBack(struct studentNode **walk)
{
    struct studentNode *temp = *walk;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    while (temp != 0)
    {
        printf("%s ", temp->name);
        temp = temp->back;
    }
    printf("\n");
}

struct studentNode *AddNode(struct studentNode **start, const char n[], int a, char s, float g)
{
    struct studentNode *walk = *start;
    struct studentNode *temp = 0;

    while (walk != 0)
    {
        temp = walk;
        walk = walk->next;
    }

    walk = new struct studentNode;
    strcpy(walk->name, n);
    walk->age = a;
    walk->sex = s;
    walk->gpa = g;
    walk->next = 0;
    walk->back = temp;

    if (temp != 0)
    {
        temp->next = walk;
    }
    else
    {
        *start = walk;
    }

    return walk;
}

void InsNode(struct studentNode *walk, const char n[], int a, char s, float g, struct studentNode **begin)
{
    struct studentNode *newNode = new struct studentNode;
    strcpy(newNode->name, n);
    newNode->age = a;
    newNode->sex = s;
    newNode->gpa = g;

    if (walk->back != 0)
    {
        walk->back->next = newNode;
        newNode->back = walk->back;
        newNode->next = walk;
        walk->back = newNode;
    }
    else
    {
        newNode->next = walk;
        newNode->back = 0;
        walk->back = newNode;
        *begin = newNode;
    }
}

void DelNode(struct studentNode **walk, struct studentNode **begin)
{
    struct studentNode *temp;
    struct studentNode *current = *walk;

    if (current->back != 0)
    {
        current->back->next = current->next;
    }
    else
    {
        *begin = current->next;
    }

    if (current->next != 0)
    {
        current->next->back = current->back;
        temp = current->next;
    }
    else
    {
        temp = current->back;
    }

    delete current;
    *walk = temp;
}

int main()
{
    struct studentNode *start, *now;
    start = 0;

    now = AddNode(&start, "one", 6, 'M', 3.11);
    ShowAll(start);
    now = AddNode(&start, "two", 8, 'F', 3.22);
    ShowAll(start);

    InsNode(now, "three", 10, 'M', 3.33, &start);
    ShowAll(start);
    InsNode(now, "four", 12, 'F', 3.44, &start);
    ShowAll(start);

    GoBack(&now);

    DelNode(&now, &start);
    ShowAll(start);
    DelNode(&now, &start);
    ShowAll(start);
    DelNode(&now, &start);
    ShowAll(start);

    return 0;
}