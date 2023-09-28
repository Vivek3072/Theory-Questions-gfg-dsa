#include <iostream>
#include <math.h>
using namespace std;

class MinHeap{
public:
    int *arr;
    int size, capacity;
    MinHeap(int val){
        size = 0;
        capacity = val;
        arr = new int[val];
    }

    int getLeft(int i){
        return 2*i+1;
    }
    int getRight(int i){
        return 2*i+2;
    }
    int getParent(int i){
        return floor((i-1)/2);
    }

    void minHeapify(int i) { 
        int left = getLeft(i); 
        int right = getRight(i); 
        int smallest = i; 
        if (left < size && arr[left] < arr[i]) 
            smallest = left; 
        if (right < size && arr[right] < arr[smallest]) 
            smallest = right; 
        if (smallest != i) { 
            swap(arr[i],arr[smallest]); 
            minHeapify(smallest); 
        } 
    }
    
    int extractMin() { 
        if (size <= 0) 
            return INT32_MAX; 
        if (size == 1) { 
            size--; 
            return arr[0]; 
        }  
        swap(arr[0],arr[size-1]);
        size--; 
        minHeapify(0); 
    
        return arr[size]; 
    } 

};

int main(){
    MinHeap h(11);
    h.insert(3); 
    h.insert(2);
    h.insert(15);
    h.insert(20);
    cout << h.extractMin() << " ";
    cout<<hp.getLeft(1)<<endl;
    cout<<hp.getParent(5)<<endl;
 
   return 0;
}
