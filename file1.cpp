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
