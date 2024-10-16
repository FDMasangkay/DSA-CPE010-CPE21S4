#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

// Function prototype for selection sort
template <typename T>
void selectionSort(T arr[], const int N);

// Function to find the position of the smallest element
template <typename T>
int Routine_Smallest(T arr[], int K, const int arrSize) {
    int pos = K;
    T smallestElem = arr[K];

    for (int j = K + 1; j < arrSize; j++) {
        if (arr[j] < smallestElem) {
            smallestElem = arr[j];
            pos = j;
        }
    }
    return pos;
}

// Selection sort implementation
template <typename T>
void selectionSort(T arr[], const int N) {
    int pos;
    T temp;
    
    for (int i = 0; i < N - 1; i++) {
        pos = Routine_Smallest(arr, i, N);
        if (pos != i) {
            temp = arr[i];
            arr[i] = arr[pos];
            arr[pos] = temp;
        }
    }
}

#endif  // SELECTIONSORT_H
