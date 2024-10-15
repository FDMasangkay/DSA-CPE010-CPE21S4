#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>
#include "nodes2.h"

// Function to perform linear search in a linked list
void linearLS(Node<char>* head, char item) {
    Node<char>* current = head;
    while (current != nullptr) {
        if (current->data == item) {
            std::cout << "Searching is successful: " << item << " found!\n";
            return;
        }
        current = current->next;
    }
    std::cout << "Searching is unsuccessful: " << item << " not found.\n";
}

// Function to perform binary search
void binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids overflow
        if (arr[mid] == key) {
            std::cout << "Search element " << key << " is found!\n";
            return;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    std::cout << "Search element " << key << " is not found!\n";
}

#endif // SEARCHING_H
