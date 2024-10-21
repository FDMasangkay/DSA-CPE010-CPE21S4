#include <iostream>
#include <cstdlib>  
#include <ctime>   
#include "mergeSort.h"

using namespace std;
#define ARRAY_SIZE 100

void randArray(int arr[], int size) {
    srand(time(0));  
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;  
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[ARRAY_SIZE];

    randArray(arr, ARRAY_SIZE);

    cout << "Unsorted array: \n";
    printArray(arr, ARRAY_SIZE);

    merge_sort(arr, 0, ARRAY_SIZE - 1);

    cout << "Sorted array: \n";
    printArray(arr, ARRAY_SIZE);

    return 0;
}
