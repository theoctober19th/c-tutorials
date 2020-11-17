#include <stdio.h>

enum TVType
{
    LCD,
    LED,
    CRT
};

typedef struct
{
    char name[100];
    enum TVType type;
    int mfd_year;
} Television;

void display(const Television *);
void swap(Television *, Television *);

int main()
{
    Television tv1 = {"Sony UHD", LED, 2019};
    Television tv2 = {"Syncmaster", CRT, 1998};

    display(&tv1);
    display(&tv2);

    printf("Swapping the manufactured year....\n");
    swap(&tv1, &tv2);

    display(&tv1);
    display(&tv2);

    return 0;
}

void display(const Television *tv)
{
    printf("The details of TV are: \n");
    printf("%-20s : %-20s\n", "Name", tv->name);
    printf("%-20s : ", "Type");
    switch (tv->type)
    {
    case LCD:
        printf("LCD\n");
        break;
    case LED:
        printf("LED\n");
        break;
    case CRT:
        printf("CRT\n");
        break;
    }
    printf("%-20s : %-20d\n", "Mfd Year", tv->mfd_year);

    if (tv->type == CRT)
    {
        printf("This TV can be harmful to your eyes.\n");
    }
}

void swap(Television *tv1, Television *tv2)
{
    int temp = tv1->mfd_year;
    tv1->mfd_year = tv2->mfd_year;
    tv2->mfd_year = temp;
}