#include <stdio.h>
#include <stdlib.h>

// this pointer points to the dynamic array
int *array = NULL;

//this tracks the size of dynamic array
int size = 0;


void init();
void insert(int, int);
void _remove(int);
void display();
void cleanup();

int main() {
    
    int index, number;
    int choice = 0;

    init();

    do{
        
        printf("1. Insert an element at a specified index.\n");
        printf("2. Remove an element from a specified index.\n");
        printf("3. Display the elements in the array.\n");
        printf("4. Exit\n");

        printf("Enter your choice.\n");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                printf("Enter index and element: ");
                scanf("%d %d", &index, &number);
                insert(index, number);
                break;
            case 2:
                printf("Enter the index: ");
                scanf("%d", &index);
                _remove(index);
                break;
            case 3:
                display();
                break;
            case 4:
                cleanup();
                exit(0);
            default:
                printf("Enter a valid choice.\n");
                break;
        }
    } while(1);
    
    return 0;
}

void init(){
    int n;
    printf("Enter the initial size of the array: ");
    scanf("%d", &n);
    size = n;

    array = malloc(n * sizeof(int));
    if(array == NULL){
        printf("The allocation failed!\n");
        exit(1);
    }

    printf("Enter %d elements: ", n);
    int i;
    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
}

void cleanup(){
    if(array != NULL){
        free(array);
    }
}

void display(){
    int i;
    printf("The elements are: ");
    for(i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insert(int index, int element){
    if(index >= size || index < 0){
        printf("Invalid index provided.\n");
        return;
    }
    size++;

    int *temp = realloc(array, size * sizeof(int));
    if(temp == NULL){
        printf("Reallocation failed! \n");
        cleanup();
        exit(2);
    }

    array = temp;
    int i;

    for(i=size-1; i>index; i--){
        array[i] = array[i-1];
    }

    array[index] = element;
}

void _remove(int index){
    if(index >= size || index < 0){
        printf("Invalid index provided.\n");
        return;
    }

    size--;
    int i;

    for(i=index; i<size; i++){
        array[i] = array[i+1];
    }

    int *temp = realloc(array, size * sizeof(int));
    if(temp == NULL){
        printf("Reallocation failed!\n");
        cleanup();
        exit(3);
    }
    array = temp;
}