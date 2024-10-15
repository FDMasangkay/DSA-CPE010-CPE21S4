#ifndef NODES_H
#define NODES_H

template <typename T>
class Node {
public:
    T data;
    Node* next;

    Node(T newData) : data(newData), next(nullptr) {}
};

template <typename T>
Node<T>* new_node(T newData) {
    return new Node<T>(newData);
}

#endif // NODES_H
