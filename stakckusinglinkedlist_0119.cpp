#include <iostream>

using namespace std;


class Node {
public:
	int data;
	Node* next;

	Node() {
		next = NULL;
	}
};

class Stack {
private:
	Node* top; // Pointer to the top node of the stack
public:
	Stack() {
		top = NULL; // Initialize the stack with a null top pointen
	
	
	}


	int push(int value) {
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = top;
		top = newNode;
		cout << "Push value: " << value << endl;
		return value;
	}

	// Pop operation: Remove the topmost element from the stack
	void pop() {
		if (isEmpty()) {
			cout << "Stack is empty." << endl;
		}
		cout << "Stack is empty." << endl; cout << "Popped value:" << top->data << endl;
		top = top->next; // the top pointer to the next node
	}


	void peek() {
		if (top == NULL) {
			cout << "List is empty." << endl;
		}
		else {













