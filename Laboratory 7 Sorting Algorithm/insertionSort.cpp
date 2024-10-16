#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For seeding rand()

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

// Insertion Sort Algorithm
template <typename T>
void insertionSort(T arr[], const int N) {
    int K = 1, J;
    T temp;

    // Step 1: Repeat Steps 2 to 5 for K = 1 to N-1
    while (K < N) {
        // Step 2: set temp = arr[K]
        temp = arr[K];
        
        // Step 3: set J = K - 1
        J = K - 1;

        // Step 4: Move elements greater than temp to one position ahead
        while (J >= 0 && temp < arr[J]) {
            arr[J + 1] = arr[J];  // Move element forward
            J--;  // Decrement J
        }
        
        // Step 5: Place temp in the correct position
        arr[J + 1] = temp;

        // Move to the next element
        K++;
    }
    // Step 6: Exit
}

int main() {
    int arr[ARRAY_SIZE];
    
    // Generate a random array of size ARRAY_SIZE
    randArray(arr, ARRAY_SIZE);

    cout << "Unsorted array: \n";
    printArray(arr, ARRAY_SIZE);

    // Sort the array using insertion sort
    insertionSort(arr, ARRAY_SIZE);

    cout << "Sorted array: \n";
    printArray(arr, ARRAY_SIZE);

    return 0;
}
