#include <stdio.h>
#include <stdlib.h>


//Recursive practise
//Recursive practise

//Iterate through the first 'n' elements an array, 
//return the number of terget values, without the use of a loop.


void recursive(int arr[], int target_val, int n, int *index, int *count) {
    if (n == 0) {
        *index = -1;  // Indicate not found
        *count = 0;
        return;
    }

    recursive(arr, target_val, n - 1, index, count);

    if (*index == -1 && arr[n - 1] == target_val) {
        *index = n - 1;
        *count = 1;
    } else if (*index != -1 && arr[n - 1] == target_val) {
        (*count)++;
    }
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 3};
    int times, index, count;
    recursive(arr, 3, 6, &index, &count);

    if (index != -1) {
        printf("The target value was found at index %d and it appears %d times.\n", index, count);
    } else {
        printf("The target value was not found in the array.\n");
    }

    return 0;
}