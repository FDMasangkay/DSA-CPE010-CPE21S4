
#include <iostream>
using namespace std;

// Creating a node
class Node {
    public: 
    int value;
    Node* next;
};

int main () {
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;
    Node* five = NULL;
    

    // allocate 3 nodes on the heap
    one = new Node ();
    two = new Node ();
    three = new Node ();
    four = new Node ();
    five = new Node ();
    
    // assign value values
    one -> value = 1;
    two -> value = 2;
    three -> value = 3;
    four -> value = 4;
    five -> value = 5;
    
    //Connect nodes
    one -> next = two;
    two -> next = three;
    three -> next = four;
    four -> next = five;
    five -> next = NULL;
    
    // print the linked list value
    head = one;
    while (head != NULL) {
        cout << head -> value;
        head = head -> next; 
    }
}
