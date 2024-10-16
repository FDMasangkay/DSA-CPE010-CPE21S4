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

// Routine to find the position of the smallest element in the unsorted portion of the array
template <typename T>
int Routine_Smallest(T A[], int K, const int arrSize) {
    int position = K;
    T smallestElem = A[K];
    
    for (int J = K + 1; J < arrSize; J++) {
        if (A[J] < smallestElem) {
            smallestElem = A[J];
            position = J;
        }
    }
    return position;
}

// Selection Sort Algorithm
template <typename T>
void selectionSort(T arr[], const int N) {
    int POS, pass = 0;

    for (int i = 0; i < N; i++) {
        POS = Routine_Smallest(arr, i, N);
        
        T temp = arr[i];
        arr[i] = arr[POS];
        arr[POS] = temp;
        
        pass++;
    }

}

int main() {
    int arr[ARRAY_SIZE];
    
    // Generate a random array of size ARRAY_SIZE
    randArray(arr, ARRAY_SIZE);

    cout << "Unsorted array: \n";
    printArray(arr, ARRAY_SIZE);

    // Sort the array using selection sort
    selectionSort(arr, ARRAY_SIZE);

    cout << "Sorted array: \n";
    printArray(arr, ARRAY_SIZE);

    return 0;
}
