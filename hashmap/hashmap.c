#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Size of the hash table
#define TABLE_SIZE 100

// Structure to store key-value pairs
typedef struct KeyValue {
    char* key;
    int value;
    struct KeyValue* next; // Pointer to the next element (for handling collisions)
} KeyValue;

// Hash map structure
typedef struct {
    KeyValue* table[TABLE_SIZE]; // Array of pointers to KeyValue structures
} HashMap;