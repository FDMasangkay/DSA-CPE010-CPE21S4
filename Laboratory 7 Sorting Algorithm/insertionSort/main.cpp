#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For seeding rand()
#include "selectionSort.h"  // Include the header for selection sort
#define ARRAY_SIZE 100

void createRandomArray(int arr[], int size) {
    srand(static_cast<unsigned int>(time(0)));  // Seed random number generator with current time
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;  // Generate random number between 0 and 999
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[ARRAY_SIZE];
    createRandomArray(arr, ARRAY_SIZE);

    std::cout << "Unsorted Array:" << std::endl;
    printArray(arr, ARRAY_SIZE);

    selectionSort(arr, ARRAY_SIZE);

    std::cout << "Sorted Array:" << std::endl;
    printArray(arr, ARRAY_SIZE);

    return 0;
}
