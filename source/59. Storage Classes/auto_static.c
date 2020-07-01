#include<stdio.h>

void foo()
{ //start of foo block
    static int a;
    printf("a = %d\n", a);
    a = a + 10;

} //end of foo block

void bar()
{ //start of bar block
    int a = 20;
    printf("a = %d\n", a);
    a = a+ 10;
     
} //end of bar block

int main()
{ //start of main block
    
    //checking static variables
    foo();
    foo();

    //checking auto variables
    bar();
    bar();
    return 0;
} //end of main block