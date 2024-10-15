#include <iostream>
#include "nodes1.h"
#include "searching1.h"

using namespace std;

int main() {
    // Create the linked list for the name "CPE21S4"
    Node<char>* name1 = new_node('C');
    Node<char>* name2 = new_node('P');
    Node<char>* name3 = new_node('E');
    Node<char>* name4 = new_node('2');
    Node<char>* name5 = new_node('1');
    Node<char>* name6 = new_node('S');
    Node<char>* name7 = new_node('4');

    // Link the nodes
    name1->next = name2;
    name2->next = name3;
    name3->next = name4;
    name4->next = name5;
    name5->next = name6;
    name6->next = name7; 
    name7->next = nullptr; // End of the list

    // Perform the linear search for a character
    linearLS(name1, 'S'); // Search for 'S'

    // Cleanup memory
    Node<char>* current = name1;
    while (current != nullptr) {
        Node<char>* temp = current;
        current = current->next;
        delete temp; // Delete the current node
    }

    return 0;
}
