#include <iostream>
#include <list>

class MyStack {
private:
    std::list<int> stack;

public:
    void push(int value) {
        stack.push_back(value);
    }
    
     void pop() {
        if (!stack.empty()) {
            stack.pop_back();
        } else {
            std::cout << "Stack is empty. Cannot pop." << std::endl;
        }
    }
    
    void printAllElements() {
        std::cout << "All elements in the stack: ";
        for (auto it = stack.rbegin(); it != stack.rend(); ++it) {
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
};
    int main() {
        MyStack myStack;
        myStack.push(1);
        myStack.push(2);
        myStack.push(3);
        
        myStack.printAllElements();
        
        myStack.pop();
        
        myStack.printAllElements();

    return 0;
}



