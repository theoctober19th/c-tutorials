#include<stdio.h>

void foo()
{ //start of foo block


} //end of foo block

void bar()
{ //start of bar block

     
} //end of bar block

int main()
{ //start of main block
    int a = 20;
    
    { //start of sub block
        int a;
        printf("a = %d\n", a);
    } //end of sub block

    printf("a = %d\n", a);

    return 0;
} //end of main block