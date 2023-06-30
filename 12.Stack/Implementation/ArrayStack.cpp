#include<bits/stdc++.h>
using namespace std;
// STACK IMPLEMENTATION WITH ARRAYS

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){
       arr = new int[cap];
       top=-1;
    }

    void push(int x){
        if(top == cap-1) return; //handling STACK-OVERFLOW case here
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top == -1) return -1; // hndling STACK-UNDERFLOW case here
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){
        if(top == -1) return -1; // hndling STACK-UNDERFLOW  case here
        return arr[top];
    }
    int size(){
        return top+1;
    }
    bool isEmpty(){
        return top == -1;
    }
};

int main(){
    MyStack(10);
    return 0;
}