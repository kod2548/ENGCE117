#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentNode
{
    char name[20];
    int age;
    char sex;
    float gpa;
    struct studentNode *next;
};

class LinkedList
{
protected:
    struct studentNode *start, **now;

public:
    LinkedList();
    ~LinkedList();
    void InsNode(const char n[], int a, char s, float g);
    void DelNode();
    void GoNext();
    void GoFirst();
    void GoLast();
    void ShowAll();
    int FindNode(const char n[]);
    struct studentNode *NowNode();
    void EditNode(const char n[], int a, char s, float g);
};

LinkedList::LinkedList()
{
    start = NULL;
    now = &start;
}

LinkedList::~LinkedList()
{
    GoFirst();
    while (*now != NULL)
    {
        DelNode();
    }
}

void LinkedList::InsNode(const char n[], int a, char s, float g)
{
    struct studentNode *node = new studentNode;

    strcpy(node->name, n);
    node->age = a;
    node->sex = s;
    node->gpa = g;

    node->next = *now;
    *now = node;
}

void LinkedList::DelNode()
{
    if (*now == NULL)
    {
        return;
    }

    struct studentNode *tmp = *now;
    *now = tmp->next;
    delete tmp;
}

void LinkedList::GoNext()
{
    if (*now != NULL)
    {
        now = &((*now)->next);
    }
}

void LinkedList::GoFirst()
{
    now = &start;
}

void LinkedList::GoLast()
{
    GoFirst();
    while (*now != NULL && (*now)->next != NULL)
    {
        now = &((*now)->next);
    }
}

void LinkedList::ShowAll()
{
    struct studentNode *temp = start;
    while (temp != NULL)
    {
        printf("%s %d %c %.2f\n", temp->name, temp->age, temp->sex, temp->gpa);
        temp = temp->next;
    }
}

int LinkedList::FindNode(const char n[])
{
    GoFirst();
    while (*now != NULL)
    {
        if (strcmp((*now)->name, n) == 0)
            return 1;
        GoNext();
    }
    return 0;
}

struct studentNode *LinkedList::NowNode()
{
    return *now;
}

void LinkedList::EditNode(const char n[], int a, char s, float g)
{
    if (*now != NULL)
    {
        strcpy((*now)->name, n);
        (*now)->age = a;
        (*now)->sex = s;
        (*now)->gpa = g;
    }
}

void AddData(LinkedList *ll)
{
    char name[20], sex;
    int age;
    float gpa;

    printf("Name: ");
    scanf("%s", name);
    printf("Age: ");
    scanf("%d", &age);
    printf("Sex: ");
    scanf(" %c", &sex);
    printf("GPA: ");
    scanf("%f", &gpa);

    ll->GoLast();
    ll->InsNode(name, age, sex, gpa);
}

void EditData(LinkedList *ll)
{
    char name[20];
    printf("Enter name to edit: ");
    scanf("%s", name);

    if (ll->FindNode(name))
    {
        char newname[20], sex;
        int age;
        float gpa;

        printf("New Name: ");
        scanf("%s", newname);
        printf("New Age: ");
        scanf("%d", &age);
        printf("New Sex: ");
        scanf(" %c", &sex);
        printf("New GPA: ");
        scanf("%f", &gpa);

        ll->EditNode(newname, age, sex, gpa);
    }
    else
    {
        printf("Not Found!\n");
    }
}

void FindData(LinkedList *ll)
{
    char name[20];
    printf("Enter name to find: ");
    scanf("%s", name);

    if (ll->FindNode(name))
    {
        struct studentNode *s = ll->NowNode();
        printf("Found: %s %d %c %.2f\n", s->name, s->age, s->sex, s->gpa);
    }
    else
    {
        printf("Not Found!\n");
    }
}

void writefile(LinkedList *ll)
{
    FILE *fp = fopen("student.txt", "w");
    if (fp == NULL)
    {
        return;
    }

    struct studentNode *temp = ll->NowNode();
    ll->GoFirst();
    temp = ll->NowNode();

    while (temp != NULL)
    {
        fprintf(fp, "%s %d %c %f\n",
                temp->name,
                temp->age,
                temp->sex,
                temp->gpa);
        temp = temp->next;
    }
    fclose(fp);
}

void readfile(LinkedList *ll)
{
    FILE *fp = fopen("student.txt", "r");

    if (fp == NULL)
    {
        printf("File Not Found!\n");
        exit(0);
    }

    char name[20], sex;
    int age;
    float gpa;

    while (fscanf(fp, "%s %d %c %f", name, &age, &sex, &gpa) != EOF)
    {
        ll->GoLast();
        ll->InsNode(name, age, sex, gpa);
    }

    fclose(fp);
}

int main()
{
    LinkedList listA;
    int menu;
    readfile(&listA);
    printf("Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : ");
    scanf("%d", &menu);
    while (menu != 0)
    {
        switch (menu)
        {
        case 1:
            AddData(&listA);
            break;
        case 2:
            EditData(&listA);
            break;
        case 3:
            listA.DelNode();
            break;
        case 4:
            FindData(&listA);
            break;
        case 5:
            listA.ShowAll();
            break;
        }
        printf("Menu - (1) Add (2) Edit (3) Delete (4) Find (5) Show (0) Edit : ");
        scanf("%d", &menu);
    }
    writefile(&listA);
    return 0;
}