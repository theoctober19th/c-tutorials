#include <stdio.h>

int main()
{

    int hr, min;
    printf("What time is it? (hh:mm): ");
    scanf("%d:%d", &hr, &min);

    char a_or_p = 'A';

    if (hr > 12)
    {
        hr -= 12;
        a_or_p = 'P';
    }

    printf("You said the time is %d:%d %cM, right? \n", hr, min, a_or_p);

    return 0;
}