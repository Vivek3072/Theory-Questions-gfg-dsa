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

Node *insertEnd(Node *head,int x){
    Node *curr = new Node(x);
    if(head==NULL){
        return curr;
    }

    Node *temp=head;
    while(temp->next!=NULL) temp=temp->next;
    temp->next=curr;
    curr->prev = temp;

    return head;
}

void printNodeData(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    // Node *head=NULL;

    Node *head = new Node(10);
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(20);

    head->next = temp1;
    temp1->next = temp2;
    // temp2->next==NULL;

    // head->prev=NULL;
    temp1->prev = head;
    temp2->prev = temp1;


    head = insertEnd(head,35);
    printNodeData(head);
    return 0;
}
