#include<iostream>
using namespace::std;

struct Node{
    int data;
    // Self referential structure 
    Node *next;

    // constructor 
    Node(int x){
        data=x;
        next=NULL;
    }
};

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(11);

    head->next = temp1;
    temp1->next = temp2;

    cout<<head->data<<" "<<head->next<<endl;
    cout<<temp1->data<<" "<<temp1->next<<endl;
    cout<<temp2->data<<" "<<temp2->next<<endl;

    // cout<<head->next; 
    return 0;
}
