#ifndef SORTING_H
#define SORTING_H

// Function prototype for insertion sort
template <typename T>
void insertionSort(T arr[], const int N);

// Implement insertion sort in the header (for simplicity)
template <typename T>
void insertionSort(T arr[], const int N) {
    int K = 1, J;
    T temp;
    
    while (K < N) {
        temp = arr[K];
        J = K - 1;

        // Move elements greater than temp to one position ahead
        while (J >= 0 && temp < arr[J]) {
            arr[J + 1] = arr[J];
            J--;
        }
        
        // Place temp in the correct position
        arr[J + 1] = temp;
        K++;
    }
}

#endif // SORTING_H
