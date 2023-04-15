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

Node *reverseDoublyLL(Node* head){
    if(head== NULL || head->next==NULL) return head;

    Node *prev=NULL;
    Node* curr = head;
    // cout<<head<<" "<<head->data<<" "<<head->next<<endl;
    while(curr!=NULL){
        prev = curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
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

    head = reverseDoublyLL(head);
    printNodeData(head);
    return 0;
}
