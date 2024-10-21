#include <iostream>
#include "mergeSort.h"

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: \n";
    printArray(arr, size);

    merge_sort(arr, 0, size - 1);

    cout << "Sorted array: \n";
    printArray(arr, size);

    return 0;
}
