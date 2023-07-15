#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34

int fibonacciNTH(int n){
    if( n <= 1) return n; //Handling both base cases here which are if (n == 0) return 1; and if (n == 1) return 1;
    return fibonacciNTH(n - 1) + fibonacciNTH(n - 2);
}

int main(){
    // cout << 0 << " " << 1 << " ";
    cout<<"5th element is : "<<fibonacciNTH(5-1);
    return 0;
}
