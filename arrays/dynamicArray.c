#include <stdio.h>
#include <stdlib.h>

void dynamicArrayMalloc() {
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
void dynamicArrayRealloc() {
    int *dynamicArray;
    int currentSize = 5;
    int newSize = 10; // New size for the array

    // Initially allocate memory for the array
    dynamicArray = (int *)malloc(currentSize * sizeof(int));
    if (dynamicArray == NULL) {
        fprintf(stderr, "Initial memory allocation failed\n");
        return;
    }

    // Initialize elements of the array
    for (int i = 0; i < currentSize; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    // Extend the array using realloc
    int *temp = realloc(dynamicArray, newSize * sizeof(int));
    if (temp == NULL) {
        fprintf(stderr, "Memory reallocation failed\n");
        free(dynamicArray); // Free the original array if reallocation fails
        return;
    }
    dynamicArray = temp; // Use the new extended array

    // Initialize new elements of the extended array
    for (int i = currentSize; i < newSize; i++) {
        dynamicArray[i] = (i + 1) * 10;
    }

    // Access and print elements of the extended array
    for (int i = 0; i < newSize; i++) {
        printf("Element at dynamicArray[%d]: %d\n", i, dynamicArray[i]);
    }

    // Free the allocated memory
    free(dynamicArray);
}

int main() {
    dynamicArrayMalloc();
    dynamicArrayRealloc();

    return 0;
}