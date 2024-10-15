#include <iostream>
#include "nodes3.h"
#include "searching3.h"

using namespace std;

int main() {
    // Create a linked list for binary search
    char choice = 'y'; 
    Node<int>* head = nullptr;

    while (choice == 'y') {
        int newData;
        cout << "Enter data: ";
        cin >> newData;

        Node<int>* node = new_node(newData);
        if (head == nullptr) {
            head = node; // Initialize the head of the list
            cout << "Successfully added " << head->data << " to the list.\n";
        } else {
            Node<int>* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next; // Traverse to the end of the list
            }
            temp->next = node; // Link the new node
            cout << "Successfully added " << node->data << " to the list.\n";
        }

        cout << "Continue? (y/n): ";
        cin >> choice;
    }

    // Display the linked list
    Node<int>* currNode = head;
    cout << "Linked list contents: ";
    while (currNode != nullptr) {
        cout << currNode->data << " ";
        currNode = currNode->next;
    }
    cout << endl;

    // Perform binary search
    binarySearch(head, 30);
    binarySearch(head, 10);
    binarySearch(head, 100);

    // Cleanup memory
    Node<int>* current = head;
    while (current != nullptr) {
        Node<int>* temp = current;
        current = current->next;
        delete temp; // Delete the current node
    }

    return 0;
}
