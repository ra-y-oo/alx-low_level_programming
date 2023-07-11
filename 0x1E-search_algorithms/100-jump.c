#include <stdio.h>
#include <math.h>
#include "search_algos.h"
/**
 * jump_search -searches for a value in a sorted array of integers using the Jump search algorithm
 */

int jump_search(int *array, size_t size, int value){
    //initialize the start and end of the sub arrays
    int i, start=0, end=sqrt(size);
    //Perform the jump search
    while(array[end] < value && start < size){
        start=end;
        end=end + sqrt(size);
        if(end > size-1)
            end=size;
    }
    //perform Linear search for the jump section
    for(i=start; i<end; i++){
        if(array[i] == value)
            return i;
    }
    return -1;
}
