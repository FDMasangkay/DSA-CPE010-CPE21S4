#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>

template <typename T>
Node<T>* getMiddle(Node<T>* start, Node<T>* end) {
    if (!start) return nullptr;

    Node<T>* slow = start;
    Node<T>* fast = start;

    while (fast != end && fast->next != end) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

template <typename T>
void binarySearch(Node<T>* head, T item) {
    Node<T>* start = head;
    Node<T>* end = nullptr;

    while (start != end) {
        Node<T>* mid = getMiddle(start, end);
        
        if (!mid) return; // List is empty or null

        if (mid->data == item) {
            std::cout << "Searching is successful: " << item << " found.\n";
            return;
        } else if (mid->data < item) {
            start = mid->next; // Search in the right half
        } else {
            end = mid; // Search in the left half
        }
    }

    std::cout << "Searching is Unsuccessful: " << item << " not found.\n";
}

#endif // SEARCHING_H
