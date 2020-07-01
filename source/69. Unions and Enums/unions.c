#include <stdio.h>
#include <string.h>

struct SStudent
{
    int roll;
    char name[100];
};

union UStudent {
    int roll;
    char name[100];
};

int main()
{
    //Creating a structure variable
    struct SStudent ss;
    ss.roll = 67;
    strcpy(ss.name, "HelloWorld");
    printf("Size of ss: %d\n", sizeof(ss));
    printf("ss.roll = %d\n", ss.roll);

    //Creating a union variable
    union UStudent us;
    printf("Size of us: %d\n", sizeof(us));
    us.roll = 56;

    printf("us.roll = %d\n", us.roll);

    strcpy(us.name, "Bikalpa");
    printf("us.roll = %d\n", us.roll);

    return 0;
}