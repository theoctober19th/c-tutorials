#include<stdio.h>

extern int a;


void foo()
{ //start of foo block

    printf("a = %d\n", a);
    a = a + 10;

} //end of foo block

void bar()
{ //start of bar block

    printf("a = %d\n", a);
     
} //end of bar block

int main()
{ //start of main block
    foo();
    bar();
    return 0;
} //end of main block