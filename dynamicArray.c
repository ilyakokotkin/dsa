#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare a pointer to an int
    int *dynamicArray;

    // Determine the size of the array
    int size = 5;

    // Allocate memory for the array dynamically
    dynamicArray = (int *)malloc(size * sizeof(int));

    // Check if the memory has been successfully allocated
    if (dynamicArray == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize elements of the array
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    // Access and print elements of the array
    for (int i = 0; i < size; i++) {
        printf("Element at dynamicArray[%d]: %d\n", i, dynamicArray[i]);
    }

    // Free the allocated memory
    free(dynamicArray);

    return 0;
}
