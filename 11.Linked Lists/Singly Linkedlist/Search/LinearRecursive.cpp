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

// this recursive approach returns position of the element if its present in the given linked list
// Time complexity in O(n) and auxillary space O(n)
int searchLLPosition(Node* head,int x){
    if(head==NULL) return -1;
    if(head->data == x) return 1;
    else {
        int ans=searchLLPosition(head->next,x);
        if(ans==-1) return -1;
        else return ans+1;
    }
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
    // Node *address=searchLLAddress(head,x);
    int position=searchLLPosition(head,x);
    if(!position) cout<<"NOT Found!"<<endl;
    else cout<<" and position :"<<position<<endl;

    return 0;
}
