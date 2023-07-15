#include <iostream>
#include <string>
using namespace std;

int SumOfDigits(int n){
    if(n<=9)
        return n;
    // if(n<=0)
    //     return 0;
    return (n%10 + (SumOfDigits(n/10)));
}

int main(){
    int n = 45;
    cout<<"Sum of digits is : "<<SumOfDigits(n);
    return 0;
}
