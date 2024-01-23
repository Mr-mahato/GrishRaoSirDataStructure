#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Checking if the stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    // Accessing the top element of the stack
    cout << "Top element of the stack is: " << myStack.top() << endl;

    // Popping elements from the stack
    // myStack.pop();
    // myStack.pop();

    // Checking the size of the stack
    cout << "Size of the stack is: " << myStack.size() << endl;

    // Popping the remaining element from the stack
    // myStack.pop();
for(int i = 0;i<=myStack.size();i++)
{
    cout << myStack.top() << " ";
    myStack.pop();
}
cout << endl;
    // Checking if the stack is empty again
    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}