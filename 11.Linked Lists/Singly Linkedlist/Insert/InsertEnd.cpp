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
 
Node *insertEnd(Node *head,int x){
    Node *temp = new Node(x);
    if(temp->next == NULL) return temp;

    Node *curr=head;
    // cout<<"ALL data"<<curr->data<<curr<<curr->next<<endl;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
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
    cout<<head<<" "<<head->next<<" "<<head->next->next<<endl;

    // head = insertEnd(head->next->next->next,40);
    printNodeData(head);
    head = insertEnd(head,40);
    printNodeData(head);
    return 0;
}
 