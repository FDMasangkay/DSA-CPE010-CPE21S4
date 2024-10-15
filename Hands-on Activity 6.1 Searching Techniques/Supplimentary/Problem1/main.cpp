#include <iostream>

int sequentialSearchArray(int arr[], int size, int key) {
    int comparisons = 0;
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == key) {
            return comparisons; // return number of comparisons
        }
    }
    return comparisons; // returns total comparisons even if not found
}

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

int sequentialSearchList(Node* head, int key) {
    int comparisons = 0;
    Node* current = head;
    while (current != nullptr) {
        comparisons++;
        if (current->data == key) {
            return comparisons; // return number of comparisons
        }
        current = current->next;
    }
    return comparisons; // returns total comparisons even if not found
}

int main() {
    // Array
    int arr[] = {15, 18, 2, 19, 18, 0, 8, 14, 19, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 18;

    int comparisonsArray = sequentialSearchArray(arr, size, key);
    std::cout << "Comparisons in array: " << comparisonsArray << std::endl;

    // Linked List
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

    int comparisonsList = sequentialSearchList(head, key);
    std::cout << "Comparisons in linked list: " << comparisonsList << std::endl;

    return 0;
}
