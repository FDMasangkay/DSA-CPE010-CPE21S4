#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;    
    int front;        
    int rear;        
    int capacity;     
    int size;         

public:
    // Constructor to initialize the queue
    Queue(int cap) : capacity(cap), front(0), rear(-1), size(0) {
        arr = new int[capacity];
    }

    // Destructor to free allocated memory
    ~Queue() {
        delete[] arr;
    }

    // Function to add an element to the queue
    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full! Cannot enqueue " << element << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = element;
        size++;
        cout << element << " added to the queue." << endl;
    }

    // Function to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot dequeue." << endl;
            return;
        }
        cout << arr[front] << " removed from the queue." << endl;
        front = (front + 1) % capacity;
        size--;
    }

    // Function to access the front element
    int peek() const {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1; // Indicate that the queue is empty
        }
        return arr[front];
    }

    // Check if the queue is empty
    bool isEmpty() const {
        return size == 0;
    }

    // Check if the queue is full
    bool isFull() const {
        return size == capacity;
    }

    // Return the current size of the queue
    int getSize() const {
        return size;
    }

    // Display all elements in the queue
    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);  // Create a queue of capacity 5

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    // Peek and display size
    cout << "Front element: " << q.peek() << endl;
    cout << "Current size: " << q.getSize() << endl;
    q.display();

    // Dequeue elements
    q.dequeue();
    q.dequeue();

    // Peek after dequeues
    cout << "Front element after two dequeues: " << q.peek() << endl;
    cout << "Current size after dequeues: " << q.getSize() << endl;
    q.display();

    // Enqueue another element
    q.enqueue(60);
    cout << "Front element after adding 60: " << q.peek() << endl;
    q.display();

    return 0;
}
