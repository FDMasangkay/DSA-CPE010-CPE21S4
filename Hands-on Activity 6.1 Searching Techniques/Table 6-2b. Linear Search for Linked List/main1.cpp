#include <iostream>
#include "nodes1.h"
#include "searching1.h"

using namespace std;

// Define the linear search function for linked lists

int main() {
    // Create the linked list for the name "FRED"
    Node<char>* name1 = new_node('F');
    Node<char>* name2 = new_node('R');
    Node<char>* name3 = new_node('E');
    Node<char>* name4 = new_node('D');

    // Link the nodes
    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = nullptr; // End of the list

    // Perform the linear search for a character
    linearLS(name1, 'R'); // Search for 'R'

    // Cleanup memory
    Node<char>* current = name1;
    while (current != nullptr) {
        Node<char>* temp = current;
        current = current->next;
        delete temp; // Delete the current node
    }

    return 0;
}
