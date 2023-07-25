#include <iostream>
using namespace std;

class DequeArray{
    int size,cap;
    int *arr;
public:
    DequeArray(int x){
        size = 0;
        cap = x;
        arr = new int[x];
    }
    void insertFront(int x){
        if(isFull()) return;
        for (int i = size-1; i >= 0 ; i--)
            arr[i+1] = arr[i];

        arr[0] = x;
        size++;    
    }
    void insertRear(int x){
        if(size == cap) return;
        arr[size++] = x;
    }
    int getFront(){
        if(isEmpty()) return -1;
        return arr[0];
    }
    int getRear(){
        if(isEmpty()) return -1;
        return arr[size-1];
    }
    void deleteFront(){
        if(isEmpty()) return;
        for (int i = 0 ; i <size-1 ; i++)
            arr[i] = arr[i+1];

        size--;
    }
    void deleteRear(){
        if(isFull()) return;
        size--;
    }
    bool isEmpty(){
        return (size == 0);
    }
    bool isFull(){
        return (size == cap);
    }
};

int main(){
    DequeArray deque = DequeArray(5);
    
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
 