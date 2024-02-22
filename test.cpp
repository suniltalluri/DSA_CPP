#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    string name;
    int rno;
    Node* next;

     Node(string name, int rno ){
        this -> name = name;
        this -> rno = rno;
        this -> next = NULL;
    }

};

bool search(Node* head, int x) 
{ 
	Node* temp = head; 
	while (temp != NULL) 
	{ 
		if (temp->rno == x) {
			return true; 
        }
		temp = temp->next; 
	} 
	return false; 
} 

void display(Node* &head){
   Node* temp = head;
    while(temp != NULL){
        cout<<temp -> rno<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
  Node* head = NULL;
  Node* node1 = new Node("sunil",1);
  Node* node2 = new Node("anil",2);
  Node* node3 = new Node("jaguu",3);
  Node* node4 = new Node("maa",4);
  Node* node5 = new Node("jay",5);
  Node* node6 = new Node("mam",6);
  Node* node7 = new Node("jam",7);
  Node* node8 = new Node("sam",8);
  Node* node9 = new Node("ramesh",9);
  Node* node10 = new Node("raju",10);
  head = node1;
  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;
  node5->next = node6;
  node6->next = node7;
  node7->next = node8;
  node8->next = node9;
  node9->next = node10;
  node10->next = NULL;
    display(head);
    bool ans = search(head, 11);
    if(ans == 0){
        cout<<"Student was Not Present"<<endl;
    }
    else{
        cout<<"Student was Present"<<endl;
    }
}