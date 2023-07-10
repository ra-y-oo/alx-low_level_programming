#include "search_algos.h"
#include <stdio.h>

int binary_search(int *array, size_t size, int value){
    if (array == NULL) {
        return -1;
    }

    int low = 0;
    int high = size - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        
        printf("Array: ");
        for (size_t i = low; i <= high; i++) {
            printf("%d ", array[i]);  // Print the array being searched
        }
        printf("\n");

        if(array[mid] == value){
            return mid;
        }
        else if(array[mid] < value){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}
