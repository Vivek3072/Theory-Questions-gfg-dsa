#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int front, size, cap;
    int *arr;

    Queue(int c)
    {
        cap = c;
        size = 0;
        front = 0;
        // rear = 0;
        arr = new int[cap];
    }

    bool isFull()
    {
        return (size == cap);
    }

    bool isEmpty()
    {
        return (size == 0);
    }
    int getFront()
    {
        if (isEmpty())
            return -1;
        return front;
    }
    int getFrontItem()
    {
        if (isEmpty())
            return -1;
        return arr[front];
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        return (front+size-1)%cap;
    }
    int getRearItem()
    {
        if (isEmpty())
            return -1;
        return arr[(front+size-1)%cap];
    }
    void enqueue(int x)
    {
        if (isFull())
            return;
        int rear = getRear();
        rear = (rear + 1)%cap;
        arr[rear] = x;
        size++;
    }

    // IT takes O(1) time for moving items to their left
    void dequeue()
    {
        if (isEmpty())
            return;
        front = (front + 1)%cap;
        size--;
    }
};

int main()
{
    struct Queue queue(5);

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    cout << "Front item is " << queue.getFront() <<"." <<queue.getFrontItem() << endl;
    queue.dequeue();
    cout << "New Front item is "<<queue.getFront()<<"." << queue.getFrontItem() << endl;
    cout << "Rear item is " << queue.getRear() <<"." <<queue.getRearItem() << endl;
    queue.enqueue(45);
    queue.enqueue(55);
    cout << "New Front item is "<<queue.getFront()<<"." << queue.getFrontItem() << endl;
    cout << "New Rear item is " << queue.getRear() <<"." <<queue.getRearItem() << endl;
    return 0;
}
