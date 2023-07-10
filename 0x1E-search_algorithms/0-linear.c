#include "search_algos.h"
#include <stdio.h>

int linear_search(int *array, size_t size, int value){
    if (array == NULL){
        return -1;  // If array is NULL
    }

    for ( size_t i = 0; i < size; i++){
        printf("Comparing value %d", array[i]); //prints value being compared

        if (array[1] == value){
            return i; //returns index of the value
        }
    }

    return -1; //value not found    
}
