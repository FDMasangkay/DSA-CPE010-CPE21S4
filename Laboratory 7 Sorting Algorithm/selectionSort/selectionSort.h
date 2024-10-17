#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

template <typename T>
int Routine_Smallest(T arr[], int K, const int N) {
    int POS = K;
    for (int j = K + 1; j < N; j++) {
        if (arr[j] < arr[POS]) {
            POS = j;
        }
    }
    return POS;
}

template <typename T>
void selectionSort(T arr[], const int N) {
    int POS, temp, pass = 0;
    // Step 1: Repeat Steps 2 and 3 for K = 0 to N-1
    for (int i = 0; i < N; i++) {
        // Step 2: Call routine smallest(A, K, N, POS)
        POS = Routine_Smallest(arr, i, N);
        // Step 3: Swap A[K] with A[POS]
        temp = arr[i];
        arr[i] = arr[POS];
        arr[POS] = temp;
        // Count
        pass++;
    }
    // [End of loop]
    // Step 4: EXIT
}

#endif // SELECTIONSORT_H
