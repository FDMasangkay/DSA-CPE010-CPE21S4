#include <iostream>

int recursiveBinarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; // Base case: key not found
    }

    int mid = (low + high) / 2;

    if (arr[mid] == key) {
        return mid; // Key found
    } else if (arr[mid] < key) {
        return recursiveBinarySearch(arr, mid + 1, high, key); // Search in the right half
    } else {
        return recursiveBinarySearch(arr, low, mid - 1, key); // Search in the left half
    }
}

int main() {
    int arr[] = {3, 5, 6, 8, 11, 12, 14, 15, 17, 18}; // Sorted array
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements
    int key = 8; // The key to search for

    int result = recursiveBinarySearch(arr, 0, n - 1, key); // Perform recursive binary search

    if (result != -1) {
        std::cout << "Key " << key << " found at index " << result << ".\n";
    } else {
        std::cout << "Key " << key << " not found in the array.\n";
    }

    return 0;
}
