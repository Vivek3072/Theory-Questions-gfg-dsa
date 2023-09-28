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

    void insertInHeap(int val){
        if(size == capacity)
            return;
        arr[size++] = val;

        for(int i = size-1 ; i != 0 && arr[i] < arr[getParent(i)]; ){
            swap(arr[i], arr[getParent(i)]);
            i = getParent(i);
        }
    }
};

int main(){
    MinHeap hp(5);
    cout<<hp.getLeft(1)<<endl;
    cout<<hp.getParent(5)<<endl;
 
   return 0;
}
