#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node *next;

    Node(int x){
        next = NULL;
        data = x;
    }
};

struct Queue{
    Node *front,*rear;
    int size;
    Queue(){
        front = NULL;
        rear = NULL;
        size = 0;
    }
    Node *getFront(){
        // if(front == NULL) return NULL;
        return front;
    }
    Node *getRear(){
        return rear;
    }
    
    int getFrontData(){
        if(front == NULL) return -1;
        return front->data;
    }
    int getRearData(){
        if(front == NULL) return -1;
        return rear->data;
    }

    int getSize(){
        return size;
    }

    void enqueue(int x){
        Node *temp = new Node(x);
        size++;
        if(front == NULL){
            front = rear =temp;
            //  = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void dequeue(){
        if(front == NULL)
            return;
        size--;
        Node *temp = front;
        front = front->next;
        if(front == NULL)
            rear = NULL;
        delete(temp);
    }

};

int main(){
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(15);
    queue.enqueue(20);
    cout<<queue.getFrontData()<<endl;
    cout<<queue.getRearData()<<endl;
    queue.dequeue();
    cout<<queue.getFrontData()<<endl;
    return 0;
}
