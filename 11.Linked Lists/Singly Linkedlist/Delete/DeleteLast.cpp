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

Node *deleteLast(Node* head){
    if(head==NULL) return NULL;
    if(head->next==NULL) {
        delete head;
        return NULL;
    }

    Node*temp = head;

    while(temp->next->next!=NULL) temp=temp->next;
    delete temp->next;
    temp->next=NULL;

    return head;
}

void printNodeData(Node *head){
    while(head!=NULL){
        // cout<<head<<" ";
        cout<<head->data<<" ";
        // cout<<head->next<<" ";
        head=head->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    // head->next->next->next = new Node(40);
    cout<<"All the elements initially :-\n";
    printNodeData(head);
    head = deleteLast(head);
    cout<<"\nAfter deleting last element :-\n";
    printNodeData(head);

    return 0;
}
