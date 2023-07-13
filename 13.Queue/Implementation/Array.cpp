#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int size, cap;
    int *arr;

    Queue(int c){
        cap = c;
        size = 0;
        arr = new int[cap];
    }

    bool isFull(){
        return (size == cap);
    }

    bool isEmpty(){
        return (size == 0);
    }

    void enqueue(int x){
        if (isFull())
            return;
        arr[size] = x;
        size++;
    }
    // IT takes O(n) time for moving items to their left
    void dequeue(){
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++){
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getFront(){
        if (isEmpty())
            return -1;
        return arr[0];
    }

    int getRear(){
        if (isEmpty())
            return -1;
        return arr[size - 1];
    }
};

int main(){
    struct Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    cout << "Front item is " << queue.getFront() << endl;
    queue.dequeue();
    cout << "New Front item is " << queue.getFront() << endl;
    cout << "Rear item is " << queue.getRear() << endl;
    return 0;
}
