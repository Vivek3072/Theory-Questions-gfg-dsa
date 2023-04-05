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

Node *insertAtGivenPosition(Node *head,int pos,int x){
    Node *temp=new Node(x);
    if(pos==1){
        temp->next = head->next;
        return temp;
    }

    Node *curr = head;
    for(int i=1 ; i<=(pos-2) && curr!=NULL; i++) curr=curr->next;
    // while((pos-2)>0){
    //     cout<<"Current data - "<<curr->data;
    //     curr=curr->next;
    //     pos--;
    // }

    cout<<endl;
    cout<<"curr next - "<<curr->data<<" "<<curr->next;
    if(curr==NULL) return head;
    temp->next = curr->next;
    curr->next = temp;
    cout<<endl;
    return head;
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
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    int pos,x;
    cin>>pos>>x;
    
    head = insertAtGivenPosition(head,pos,x);
    printNodeData(head);
    return 0;
}
