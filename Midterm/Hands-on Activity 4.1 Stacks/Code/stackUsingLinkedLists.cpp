#include <iostream>
#include <string>

struct Node {
    char data;
    Node *next;
};

class LinkedListStack {
private:
    Node *top;

public:
    LinkedListStack() : top(nullptr) {}

    void push(char c) {
        Node *newNode = new Node{c, top};
        top = newNode;
    }

    char pop() {
        if (top == nullptr) return '\0'; // Stack Underflow
        char poppedValue = top->data;
        Node *temp = top;
        top = top->next;
        delete temp;
        return poppedValue;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

bool isBalancedLL(const std::string &expr) {
    LinkedListStack stack;
    for (char c : expr) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (stack.isEmpty()) {
                std::cout << "Error: Unmatched closing symbol '" << c << "'\n";
                return false;
            }
            char topChar = stack.pop();
            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                std::cout << "Error: Mismatched symbols '" << topChar << "' and '" << c << "'\n";
                return false;
            }
        }
    }
    // Final check for unmatched opening symbols
    if (!stack.isEmpty()) {
        std::cout << "Error: Unmatched opening symbol(s) remain\n";
        return false;
    }
    return true;
}

int main() {
    std::string expressions[] = {
        "(A+B)+(C-D)",
        "((A+B)+(C-D)",
        "((A+B)+[C-D])",
        "((A+B]+[C-D]}"
    };

    for (const auto &expr : expressions) {
        std::cout << expr << " is " << (isBalancedLL(expr) ? "Valid" : "Invalid") << std::endl;
    }

    return 0;
}
