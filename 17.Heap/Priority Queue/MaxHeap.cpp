#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int> pq;
    // By default the priority queue is MaxHeap i.e, the maximum element is at the top of the heap
    // The pq.top() is O(1), and push and pop are log(n) operations in a priority queue
    pq.push(10);
    pq.push(15);
    pq.push(5);
    cout << pq.size() << " ";
    cout << pq.top() << " ";
    
    while (pq.empty() == false){
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
 