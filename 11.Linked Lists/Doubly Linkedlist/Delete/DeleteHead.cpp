#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        prev=NULL;
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
    cout<<endl;
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
    printNodeData(head);

    head = deleteFirst(head);
    printNodeData(head);

    return 0;
}
