#include <iostream>
using namespace std;

int naturalNums(int n){
    if(n==0) return 0;
    return n + naturalNums(n-1);
}

int main(){
    cout<<"Sum of given n no.s is : "<<naturalNums(5);
    return 0;
}
