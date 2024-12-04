#ifndef STACK_H
#define STACK_H

#include <stdexcept>

template <typename T>
class Node {
public:
    T data;
    Node* next;
    Node(T data, Node* next) {
        this->data = data;
        this->next = next;
    }
};

template <typename T>
class Stack {
    Node<T>* top;
    int size;
public:
    Stack() : top(nullptr), size(0) {}

    void push(T value) {
        top = new Node<T>(value, top);
        size++;
    }

    T pop() {
        if (top == nullptr) {
            throw std::underflow_error("Stack is empty - is not possible to remove element");
        }
        T val = top->data;
        Node<T>* oldtop = top;
        top = top->next;
        delete oldtop;
        size--;
        return val;
    }

    bool isEmpty() const {
        return top == nullptr;
    }

    int getSize() const {
        return size;
    }
};

#endif // STACK_H