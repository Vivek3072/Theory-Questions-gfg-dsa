#include<iostream>
using namespace::std;

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

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(15);
    Node *temp2 = new Node(11);

    head->next = temp1;
    temp1->next = temp2;
    // temp2->next==NULL;

    // head->prev=NULL;
    temp1->prev = head;
    temp2->prev = temp1;

    cout<<head<<" "<<head->next<<endl;
    cout<<temp1<<" "<<temp1->next<<endl;
    cout<<temp2<<" "<<temp2->next<<endl;

    cout<<endl;

    cout<<head<<" "<<head->prev<<endl;
    cout<<temp1<<" "<<temp1->prev<<endl;
    cout<<temp2<<" "<<temp2->prev<<endl;

    // cout<<head->next; 
    return 0;
}
