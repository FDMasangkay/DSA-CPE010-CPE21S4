#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>
#include "nodes1.h"

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

#endif // SEARCHING_H
