#include <iostream>
#include <vector>

class Stack {
private:
    std::vector<int> elements;

public:
    void push(int element) {
        elements.push_back(element);
    }

    void pop() {
        if (!elements.empty()) {
            elements.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }

    void displayAll() {
        if (!elements.empty()) {
            std::cout << "Stack elements: ";
            for (int i = 0; i < elements.size(); i++) {
                std::cout << elements[i] << " ";
            }
            std::cout << std::endl;
        } else {
            std::cout << "Stack is empty." << std::endl;
        }
    }

    int top() {
        if (!elements.empty()) {
            return elements.back();
        } else {
            std::cout << "Stack is empty. No top element." << std::endl;
            return -1;
        }
    }
};

int main() {
    Stack stack;
    
    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.displayAll();

    std::cout << "Top element: " << stack.top() << std::endl;

    stack.pop();
    stack.displayAll();

    return 0;
}
