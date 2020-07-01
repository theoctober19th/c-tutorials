#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int roll;
    char name[100];
};

int main()
{
    struct Student *sptr;
    sptr = (struct Student *)malloc(sizeof(struct Student));

    if (sptr == NULL)
    {
        printf("Allocation failed!\n");
        exit(1);
    }

    sptr->roll = 45;
    strcpy(sptr->name, "Bikalpa");

    printf("Roll = %d\nName = %s\n", sptr->roll, sptr->name);

    if (sptr != NULL)
    {
        free(sptr);
    }
    return 0;
}