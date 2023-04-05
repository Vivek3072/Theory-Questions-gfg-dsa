#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *deleteFirst(Node* head){
// Node *deleteFirst(Node* &head,int x){
    if(head==NULL) return NULL;
    else {
        Node*temp = head->next;
        delete head;
        return temp;
    }
    
}

void printNodeData(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printNodeData(head);
    head = deleteFirst(head);
    printNodeData(head);

    return 0;
}
