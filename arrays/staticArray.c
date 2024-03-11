#include <stdio.h>

int main() {
    // Declare an array of integers with a fixed size of 5
    int myArray[5];

    // Initialize elements of the array
    myArray[0] = 10;
    myArray[1] = 20;
    myArray[2] = 30;
    myArray[3] = 40;
    myArray[4] = 50;

    // Access and print elements of the array
    for (int i = 0; i < 5; i++) {
        printf("Element at myArray[%d]: %d\n", i, myArray[i]);
    }

    return 0;
}