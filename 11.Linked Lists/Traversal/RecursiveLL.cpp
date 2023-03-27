// We will see traversing a simple singly linked list here by recurive method
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

// Time complexity and auxillary space required is O(n), n-number of nodes in linked lists 
void printNodeData(Node *head){
    if(head==NULL) return;
    cout<<head->data<<" ";
    printNodeData(head->next);
}

int main(){
    Node *head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    printNodeData(head);
    return 0;
}
