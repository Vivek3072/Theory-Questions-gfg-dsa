#include<iostream>
using namespace std;
// checking kth bit is set or not

void kthBit(int,int);

int main(){
    int n,k;
    cin>>n>>k;
    kthBit(n,k);
}


void kthBit(int n , int k){
    // USING RIGHT SHIFT
    // if(( 1 & ( n>>k-1)) == 1 ) cout<<"yes"<<endl;
    // else cout<<"No"<<endl;

    // USING LEFT SHIFT
    if( n & ( 1<<(k-1))  ) cout<<"yes"<<endl;
    else cout<<"No"<<endl;
}

