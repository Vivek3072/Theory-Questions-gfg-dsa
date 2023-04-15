#include<iostream>
using namespace std;

struct Node{
    int data;
    // Self referential structure 
    Node *prev;
    Node *next;

    // constructor 
    Node(int x){
        data=x;
        prev=NULL;
        next=NULL;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp = new Node(x);
    temp->next = head;
    if(head!=NULL) head->prev = temp;
    return temp;
}

void printNodeData(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(20);

    head->next = temp1;
    temp1->next = temp2;
    // temp2->next==NULL;

    // head->prev=NULL;
    temp1->prev = head;
    temp2->prev = temp1;

    head = insertBegin(head,5);
    printNodeData(head);
    return 0;
}
