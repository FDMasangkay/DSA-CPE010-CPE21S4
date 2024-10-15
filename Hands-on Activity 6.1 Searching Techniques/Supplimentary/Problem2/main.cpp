#include <iostream>

struct Node {
    int data;
    Node* next;
};

Node* new_node(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = nullptr;
    return node;
}

int countOccurrencesArray(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}

int countOccurrencesList(Node* head, int key) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key) {
            count++;
        }
        current = current->next;
    }
    return count;
}

int main() {
    // Array
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18; // The item we want to count occurrences of

    // Count occurrences in array
    int occurrenceCountArray = countOccurrencesArray(arr, size, key);
    std::cout << "Occurrences of " << key << " in array: " << occurrenceCountArray << std::endl;

    // Create the linked list
    Node* head = new_node(15);
    head->next = new_node(18);
    head->next->next = new_node(2);
    head->next->next->next = new_node(19);
    head->next->next->next->next = new_node(18);
    head->next->next->next->next->next = new_node(0);
    head->next->next->next->next->next->next = new_node(8);
    head->next->next->next->next->next->next->next = new_node(14);
    head->next->next->next->next->next->next->next->next = new_node(19);
    head->next->next->next->next->next->next->next->next->next = new_node(14);

    // Count occurrences in linked list
    int occurrenceCountList = countOccurrencesList(head, key);
    std::cout << "Occurrences of " << key << " in linked list: " << occurrenceCountList << std::endl;

    // Cleanup memory
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp; // Delete the current node
    }

    return 0;
}
