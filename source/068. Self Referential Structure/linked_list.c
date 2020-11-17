#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node n1 = {100, NULL};
    struct Node n2 = {200, NULL};
    struct Node n3 = {300, NULL};
    struct Node n4 = {400, NULL};
    struct Node n5 = {500, NULL};

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;

    struct Node *root = &n1;
    struct Node *p = root;

    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}