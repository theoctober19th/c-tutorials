#include <stdio.h>
#include <stdlib.h>

//a pointer that points to the dynamic array
int *array = NULL;
//the size of dynamic array
int size = 0;

void init();
void add(int, int);
void delete (int);
void display();
void cleanup();

int main()
{
    init();
    char choice;
    int index, value;
    do
    {
        printf("MAIN MENU\n");
        printf("1. Insert an element at a specified index.\n");
        printf("2. Delete an element from a specified index.\n");
        printf("3. Display the dynamic array.\n");
        printf("4. Exit the program\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
        switch (choice)
        {
        case '1':
            printf("Enter the index and the value: ");
            scanf("%d%d", &index, &value);
            add(index, value);
            break;
        case '2':
            printf("Enter the index: ");
            scanf("%d", &index);
            delete (index);
            break;
        case '3':
            display();
            break;
        case '4':
            exit(0);
            break;
        }
    } while (1);
    cleanup();
    return 0;
}

void init()
{
    printf("Enter the initial size of dynamic array: ");
    scanf("%d", &size);

    array = malloc(size * sizeof(int));
    if (array == NULL)
    {
        printf("Allocation failed\n");
        exit(1);
    }

    printf("Enter %d elements: ", size);
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}

void cleanup()
{
    if (array != NULL)
    {
        free(array);
    }
}

void add(int index, int value)
{
    size++;
    int *temp = realloc(array, size * sizeof(int));
    if (temp == NULL)
    {
        printf("Realloation failed!\n");
        cleanup();
        exit(2);
    }
    array = temp;
    int prev = array[index];
    int i;
    for (i = index; i < size; i++)
    {
        int current = array[i];
        array[i] = prev;
        prev = current;
    }
    array[index] = value;
}

void delete (int index)
{
    size--;
    int i;
    for (i = index; i < size; i++)
    {
        array[i] = array[i + 1];
    }
    int *temp = realloc(array, size * sizeof(int));
    if (temp == NULL)
    {
        printf("Reallocation Failed!\n");
        cleanup();
        exit(3);
    }
    array = temp;
}

void display()
{
    int i;
    printf("The elements in the array are: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
