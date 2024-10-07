#include <iostream>
#include <string>

using namespace std;


struct Node {
    string data;
    Node* next;
};


class Queue {
private:
    Node* front;
    Node* rear;

public:

    Queue() {
        front = nullptr;
        rear = nullptr;
    }

   
    bool isEmpty() {
        return (front == nullptr);
    }


    void enqueue(string item) {
        Node* newNode = new Node();
        newNode->data = item;
        newNode->next = nullptr;

        if (rear == nullptr) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

   
    string dequeue() {
        if (isEmpty()) {
            return "Queue is empty";
        } else {
            string item = front->data;
            Node* temp = front;
            front = front->next;

            if (front == nullptr) {
                rear = nullptr;
            }

            delete temp;
            return item;
        }
    }

    void display() {
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue("Fred");
    cout << "Inserting an item into an empty queue:"<<endl;
    cout << "Queue after inserting 'Fred': ";
    q.display();

    q.enqueue("Andrei");
    cout << "\nInserting an item into an non-empty queue:"<<endl;
    cout << "Queue after inserting 'Andrei': ";
    q.display();


    cout << "\nDeleting an item from a queue of more than one item:"<<endl;
    cout << "Deleted item: " << q.dequeue() << endl;
    cout << "Queue after deleting an item: ";
    q.display();



    cout << " \nDeleting an item from a queue with one item:"<<endl;
    cout << "Deleted item: " << q.dequeue() << endl;
    cout << "Queue after deleting an item: ";
    q.display();


    return 0;
}
