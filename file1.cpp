#include <iostream>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;

    Node() {
        next = NULL;  // Initialize next pointer to NULL
    }
};

// Stack class
class Stack {
private:
    Node* top;  // Pointer to the top of the stack

public:
    // Constructor
    Stack() {
        top = NULL;  // Initialize stack with NULL top pointer
    }

    // Push operation: Insert an element onto the top of the stack
    void push(int value) {
        Node* newNode = new Node();  // Allocate memory for the new node
        newNode->data = value;       // Assign the value to the new node
        newNode->next = top;         // Set the next pointer of the new node to the current top
        top = newNode;               // Update the top pointer to point to the new node
        cout << "Pushed " << value << endl;
    }

    // Pop operation: Remove the topmost element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            Node* temp = top;        // Create a temporary pointer to the top node
            top = top->next;         // Update the top pointer to the next node
            cout << "Popped value: " << temp->data << endl;
            delete temp;             // Free the memory of the popped node
        }
    }

    // Peek/Top operation: Retrieve the value of the topmost element without removing it
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top value: " << top->data << endl;
        }
    }

    // isEmpty operation: Check if the stack is empty
    bool isEmpty() {
        return top == NULL;  // Return true if the stack is empty (top is NULL)
    }
};

int main() {
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4) {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. Exit\n";