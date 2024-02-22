// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    
}

void displayLL(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
}

int main(){
    Node* head = NULL;
    Node* node1 = new Node(1);
    head = node1;
    head->next = node1;
    node1->next = NULL;

    Node* node2 = new Node(2);
    node1->next = node2;
    node2->next = NULL;
    insertAtHead(head, 12);
    displayLL(head);

}



// Iterative C++ program to search 
// an element in linked list 
#include <bits/stdc++.h>
using namespace std; 

// Link list node
class Node 
{ 
	public:
	int key; 
	Node* next; 
}; 

/* Given a reference (pointer to pointer) to 
the head of a list and an int, push a new 
node on the front of the list. */
void push(Node** head_ref, int new_key) 
{ 
	// Allocate node
	Node* new_node = new Node();

	// Put in the key
	new_node->key = new_key; 

	// Link the old list of the 
	// new node 
	new_node->next = (*head_ref); 

	// Move the head to point to the 
	// new node
	(*head_ref) = new_node; 
} 

// Checks whether the value x is 
// present in linked list 
bool search(Node* head, int x) 
{ 
	Node* current = head; 
	while (current != NULL) 
	{ 
		if (current->key == x) 
			return true; 
		current = current->next; 
	} 
	return false; 
} 

// Driver code
int main() 
{ 
	// Start with the empty list
	Node* head = NULL; 
	int x = 21; 

	// Use push() to construct list 
	// 14->21->11->30->10 
	push(&head, 10); 
	push(&head, 30); 
	push(&head, 11); 
	push(&head, 21); 
	push(&head, 14); 

	search(head, 21)? cout<<"Yes" : cout<<"No"; 
	return 0; 
} 
// This is code is contributed by rathbhupendra
