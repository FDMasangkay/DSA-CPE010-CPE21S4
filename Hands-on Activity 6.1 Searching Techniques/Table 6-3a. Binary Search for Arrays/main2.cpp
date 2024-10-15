#include <iostream>
#include "nodes2.h"
#include "searching2.h"

using namespace std;

int main() {
    // Example of using binary search
    int data[] = {10, 20, 30, 40, 50}; // Sorted array
    int n = sizeof(data) / sizeof(data[0]); // Number of elements

    binarySearch(data, n, 30); // Search for 30
    binarySearch(data, n, 60); // Search for 60

    // Create the linked list for the name "FRED"
    Node<char>* name1 = new_node('F');
    Node<char>* name2 = new_node('R');
    Node<char>* name3 = new_node('E');
    Node<char>* name4 = new_node('D');

    // Link the nodes
    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = nullptr;

    // Perform the linear search for a character
    linearLS(name1, 'F'); // Search for '4'

    // Cleanup memory
    Node<char>* current = name1;
    while (current != nullptr) {
        Node<char>* temp = current;
        current = current->next;
        delete temp; // Delete the current node
    }

    return 0;
}
