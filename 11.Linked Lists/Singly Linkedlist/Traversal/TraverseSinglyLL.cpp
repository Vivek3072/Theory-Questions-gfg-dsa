// We will see traversing a simple singly linked list here 
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

void printNodeData(Node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }

    // OR  
    // Node *current = head;
    //  while(current!= NULL){
    //     cout<<current->data<<" ";
    //     current=current->next;
    //  }
}
int main(){
    Node *head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    printNodeData(head);
    printNodeData(head);
    return 0;
}
