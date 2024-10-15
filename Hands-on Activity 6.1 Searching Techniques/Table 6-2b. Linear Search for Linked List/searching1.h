#ifndef SEARCHING_H
#define SEARCHING_H
using namespace std;
#include <iostream>
#include "nodes1.h"

// Function to perform linear search in a linked list
void linearLS(Node<char>* head, char target) {
    Node<char>* current = head;
    int comparisons = 0; // To count the number of comparisons

    while (current != nullptr) {
        comparisons++;
        if (current->data == target) {
            cout << "Searching is successful. Found '" << target << "' after " << comparisons << " comparisons.\n";
            return;
        }
        current = current->next;
    }

    cout << "Searching is unsuccessful after " << comparisons << " comparisons.\n"; // If the item is not found
}

#endif // SEARCHING_H
