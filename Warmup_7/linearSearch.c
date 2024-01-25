#include <stdio.h>

int linearSearch(int array[], int arraySize, int target){

    for(int i =0; i < arraySize; i++){
        if(array[i] == target){
            return i;
        }
    }
}

int main() {
    int array[] = {1, 4, 7, 9, 12};
    int target = 9;
    int index;
    int arraySize = sizeof(array) / sizeof(array[0]);
    index = linearSearch(array, arraySize, target);
    if(index != 1){
        printf("Element found at index: %d\n", index);
    }else{
         printf("Element not found\n");
    }
}




