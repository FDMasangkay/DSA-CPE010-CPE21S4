#include <iostream>

void binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;
    int mid;
    int iterations = 0;

    while (low <= high) {
        iterations++;
        mid = (low + high) / 2;
        
        std::cout << "Iteration " << iterations << ": Low = " << low 
                  << ", High = " << high << ", Mid = " << mid 
                  << ", Mid Value = " << arr[mid] << std::endl;

        if (arr[mid] == key) {
            std::cout << "Key " << key << " found at index " << mid << ".\n";
            return;
        } else if (arr[mid] < key) {
            low = mid + 1; // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }

    std::cout << "Key " << key << " not found in the array.\n";
}

int main() {
    int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements
    int key = 8; // The key to search for

    binarySearch(arr, n, key); // Perform binary search

    return 0;
}
