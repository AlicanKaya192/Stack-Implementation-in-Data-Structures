#include <iostream>
#include "Stack.h"

int main() {
    Stack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Stack size: " << stack.getSize() << std::endl; // Output: 3
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl; // Output: No

    stack.pop();
    std::cout << "Stack size after pop: " << stack.getSize() << std::endl; // Output: 2

    return 0;
}