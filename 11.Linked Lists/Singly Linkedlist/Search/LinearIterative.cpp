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

// this iterative approach returns position of the element if its present in the given linked list
// Time complexity in O(n) and auxillary space O(1)
int searchLLPosition(Node* head,int x){
    int pos=1;
    if(head==NULL) return -1;
    while(head!=NULL){
        if(head->data == x) return pos;
        else{
            head=head->next;
            pos++;
        }
    }
    return -1;
}

// this iterative approach returns address of the element if its present in the given linked list
Node *searchLLAddress(Node* head,int x){
    if(head==NULL) return NULL;
    while(head!=NULL){
        if(head->data == x) return head;
        head=head->next;
    }
    return NULL;
}

void printNodeData(Node *head){
        cout<<"The elements are: ";
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main(){
    int x;
    cin>>x;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printNodeData(head);
    cout<<endl;
    Node *address=searchLLAddress(head,x);
    int position=searchLLPosition(head,x);
    if(!address) cout<<"NOT Found!"<<endl;
    else cout<<"Found at address: "<<address<<" and position :"<<position<<endl;

    return 0;
}
