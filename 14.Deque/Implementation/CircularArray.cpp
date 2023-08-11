#include <iostream>
using namespace std;

class DequeCircularArray {
    int* arr;
    int front,size,capacity;

public:
    DequeCircularArray(int x) {
        capacity = x;
        arr = new int[capacity];
        front = 0; 
        size = 0;
    }


    ~DequeCircularArray() {
        delete[] arr;
    }

    // Function to insert an element at the front of the deque
    // we can get new front by decreasing by 1 in circular array, as to maintain that front never becomes '-1' we add capacity in it to get new_front as (front - 1 + capacity)%capacity;
    void insertFront(int x) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at the front." << endl;
            return;
        }

        front = (front + capacity - 1 ) % capacity;
        arr[front] = x;
        size++;
    }

    // Function to insert an element at the rear of the deque
    void insertRear(int x) {
        if (isFull()) {
            cout << "Deque is full. Cannot insert at the rear." << endl;
            return;
        }
        // we can get current rear as, rear = (front + size - 1 ) % capacity;
        int new_rear = (front + size) % capacity;
        arr[new_rear] = x;
        size++;
    }

    // Function to delete the front element of the deque
    void deleteFront() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from the front." << endl;
            return;
        }

        front = (front + 1) % capacity;
        size--;
    }

    // Function to delete the rear element of the deque
    void deleteRear() {
        if (isEmpty()) {
            cout << "Deque is empty. Cannot delete from the rear." << endl;
            return;
        }

        size--;
    }

    // Function to get the front element of the deque
    int getFront() {
        if (isEmpty()) {
            cout << "Deque is empty. No front element." << endl;
            return -1;
        }

        return arr[front];
    }

    // Function to get the rear element of the deque
    int getRear() {
        if (isEmpty()) {
            cout << "Deque is empty. No rear element." << endl;
            return -1;
        }

        return arr[(front + size - 1) % capacity];
    }

    // Function to check if the deque is full
    bool isFull() {
        return size == capacity;
    }

    // Function to check if the deque is empty
    bool isEmpty() {
        return size == 0;
    }

    // Function to get the current size of the deque
    int getSize() {
        return size;
    }
};

int main() {
    DequeCircularArray deque(5);

    deque.insertFront(10);
    deque.insertRear(20);
    deque.insertRear(28);
    deque.insertRear(30);

    cout << "Front: " << deque.getFront() << endl; 
    cout << "Rear: " << deque.getRear() << endl;   
    deque.deleteFront();
    deque.deleteRear();
    deque.insertFront(11);

    cout << "Front: " << deque.getFront() << endl; 
    cout << "Rear: " << deque.getRear() << endl; 

    return 0;
}
