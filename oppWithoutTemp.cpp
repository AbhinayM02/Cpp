#include <iostream>
using namespace std;
#define MAX 100   
class stack {
    int arr[MAX];
    int top;
public:
    stack() {
        top = -1;   
    }
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack" << endl;
    }
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return;
        }
        int x = arr[top--];
        cout << x << " popped from stack" << endl;
    }
    void peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element is: " << arr[top] << endl;
    }
    void display() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    stack s;
    int choice, value;

    do {
        cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                s.pop();
                break;

            case 3:
                s.peek();
                break;

            case 4:
                s.display();
                break;

            case 5:
                cout << "Exiting" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    return 0;
}
