#include <stdio.h>

int main(){

    if (remove("sagarmatha.txt") != 0){
        printf("Cannot delete the file.\n");
    } else {
        printf("Deleted the file successfully.\n");
    }

    return 0;
}