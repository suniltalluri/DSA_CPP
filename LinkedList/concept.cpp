#include<bits/stdc++.h>
using namespace std;

struct  node
{
    int value;
    struct node *next;
};

void printLinkedList(struct node){
    
}

int main(){

//memory allocation
struct *node head;
struct node *one = new melloc(sizeof(struct node));
struct node *two = new melloc(sizeof(struct node));
struct node *three = new melloc(sizeof(struct node));

//assinging values
one->value = 1;
two->value = 2;
three->value = 3;


//connecting nodes
one->next = two;
two->next = three;
three->next = NULL;

head = one;

printLiskedList(head);

}