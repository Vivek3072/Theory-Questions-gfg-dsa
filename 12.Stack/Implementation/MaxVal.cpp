#include <bits/stdc++.h>
using namespace std;
// STACK IMPLEMENTATION WITH ARRAYS get the maximum value in stack in O(1) time

class MyStack{
public:
    int *arr;
    int cap;
    int top;
    int *maxVal;
    int maxArrTop;

    MyStack(int c){
        cap = c;
        arr = new int[cap];
        top = -1;
        maxVal = new int[cap];
        maxArrTop = -1;
    }

    void push(int x){
        if (top == cap - 1)
            return;
        top++;
        arr[top] = x;

        if(maxArrTop == -1)
            maxVal[++maxArrTop] = x;
        else if (maxVal[maxArrTop] <= x)
            maxVal[++maxArrTop] = x;
    }

    int getMax(){
        if (maxArrTop == -1)
            return INT32_MIN;
        return maxVal[maxArrTop];
    }

    int pop(){
        if (top == -1)
            return -1;
        int res = arr[top];
        top--;
        if(maxVal[maxArrTop] == res)
            maxVal[maxArrTop--] = -1;
        
        return res;
    }

    int peek(){
        if (top == -1)
            return -1;
        return arr[top];
    }

    int size(){
        return top + 1;
    }

    bool isEmpty(){
        return top == -1;
    }
};

int main(){
    MyStack st(5);
    st.push(7);
    st.push(1);
    st.push(7);
    cout<<st.getMax()<<endl;
    st.pop();
    cout<<st.getMax()<<endl;
    return 0;
}