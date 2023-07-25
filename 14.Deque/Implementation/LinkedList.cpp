#include <iostream>
using namespace std;

// Definition of the Node structure for doubly linked list
struct Node {
    int data;
    Node* prev;
    Node* next;

    // Constructor
    Node(int x) {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

class DequeLinkedLists {
    Node* front;
    Node* rear;
    int size;

public:
    DequeLinkedLists(int x) {
        front = NULL;
        rear = NULL;
        size = x;
    }

    void insertFront(int x) {
        Node* temp = new Node(x);
        temp->next = front;
        if (front != NULL)
            front->prev = temp;
        else 
            rear = temp;
        
        front = temp;
        size--;
    }

    void insertRear(int x) {
        Node* temp = new Node(x);
        temp->prev = rear;
        if (rear != NULL) 
            rear->next = temp;
        else 
            front = temp;

        rear = temp;
        size++;
    }

    int getFront() {
        return front->data;
    }

    int getRear() {
        return rear->data;
    }

    void deleteFront() {
        if (size == 0) return;
        Node* temp = front;
        front = front->next;
        if (front != NULL) 
            front->prev = NULL;
        else 
            rear = NULL; 
        
        delete temp;
        size++;
    }

    void deleteRear() {
        if (size == 0) return;
        Node* temp = rear;
        rear = rear->prev;
        if (rear != NULL) 
            rear->next = NULL;
        else
            front = NULL;

        delete temp;
        size--;
    }

    int getSize() {
        return size;
    }
};

int main() {
    DequeLinkedLists deque = DequeLinkedLists(5);

    deque.insertFront(10);
    deque.insertRear(20);
    deque.insertRear(25);
    deque.insertRear(30);

    cout << deque.getFront() << endl;
    cout << deque.getRear() << endl; 

    deque.deleteFront();
    deque.deleteRear();

    cout << deque.getFront() << endl; 
    cout << deque.getRear() << endl; 

    return 0;
}
