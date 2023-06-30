#include<bits/stdc++.h>
using namespace std;
// STACK IMPLEMENTATION WITH VECTORS(DYNAMIC SIZED ARRAYS)

struct MyStack{
    vector<int> arr;
    void push(int x){
        arr.push_back(x);
    }
    int pop(){
        int res = arr.back();
        arr.pop_back();
        return res;
    }
    int peek(){
        return arr.back();
    }
    int size(){
        return arr.size();
    }
    bool isEmpty(){
        return arr.empty();
    }
};

int main(){
    MyStack();
    return 0;
}