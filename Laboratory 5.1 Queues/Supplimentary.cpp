#include <iostream>
#include <string>

class Job {
public:
    int jobID;
    std::string userName;
    int pages;

    Job(int id, const std::string& user, int p) 
        : jobID(id), userName(user), pages(p) {}
};

class Node {
public:
    Job job;
    Node* next;

    Node(const Job& j) : job(j), next(nullptr) {}
};

class Printer {
private:
    Node* front;
    Node* rear;

public:
    Printer() : front(nullptr), rear(nullptr) {}

    void addJob(const Job& job) {
        Node* newNode = new Node(job);
        if (rear) {
            rear->next = newNode;
        }
        rear = newNode;
        if (!front) {
            front = newNode;
        }
    }

    void processJobs() {
        while (front) {
            Job currentJob = front->job;
            std::cout << "Processing job ID: " << currentJob.jobID 
                      << ", User: " << currentJob.userName 
                      << ", Pages: " << currentJob.pages << std::endl;
            Node* temp = front;
            front = front->next;
            delete temp; // Free the memory
        }
        rear = nullptr; // Reset rear
    }
};

int main() {
    Printer printer;

    // Simulating job submissions
    printer.addJob(Job(1, "Alice", 5));
    printer.addJob(Job(2, "Bob", 3));
    printer.addJob(Job(3, "Charlie", 10));

    // Process the jobs
    printer.processJobs();

    return 0;
}
