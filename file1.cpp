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
