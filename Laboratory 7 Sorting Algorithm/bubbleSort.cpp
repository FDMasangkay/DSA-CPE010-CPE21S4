#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For seeding rand()
#include <algorithm>  // for std::swap

using namespace std;
#define ARRAY_SIZE 100

// Function to generate a random array of integers
void randArray(int arr[], int size) {
    srand(time(0));  // Seed random number generator with current time
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;  // Generate random number between 0 and 999
    }
}

// Function to print an array of integers
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Template function for bubble sort
template <typename T>
void bubbleSort(T arr[], size_t arrSize) {
    for (size_t i = 0; i < arrSize - 1; i++) {
        for (size_t j = 0; j < arrSize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int arr[ARRAY_SIZE];
    
    // Generate a random array of size ARRAY_SIZE
    randArray(arr, ARRAY_SIZE);

    cout << "Unsorted array: \n";
    printArray(arr, ARRAY_SIZE);

    // Sort the array using bubble sort
    bubbleSort(arr, ARRAY_SIZE);

    cout << "Sorted array: \n";
    printArray(arr, ARRAY_SIZE);

    return 0;
}
