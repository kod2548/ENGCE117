#include <stdio.h>

#define NUM_STUDENTS 4

struct Student
{
    int id;
};

int check_id_existence(struct Student student[], int size, int search_id)
{
    int i;
    int found_status = 0;

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        if (search_id == student[i].id)
        {
            found_status = 1;
            break;
        }
    }
    return found_status;
}

int main()
{
    struct Student id_list[NUM_STUDENTS];
    int search_id;
    int found_status;
    int i;

    printf("Enter IDs for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &id_list[i].id);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &search_id);

    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");

    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%d ", id_list[i].id);
    }

    printf("\n");
    printf("Search ID: %d\n", search_id);

    found_status = check_id_existence(id_list, NUM_STUDENTS, search_id);
    if (found_status == 1)
    {
        printf("ID FOUND ");
    }
    else
    {
        printf("ID NOT FOUND ");
    }
    printf("in the system");
    return 0;
}
