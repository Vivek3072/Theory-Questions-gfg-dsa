//Finding all prime numberssmaller or equal to given number
#include<iostream>
using namespace std;
void smallerPrime(int);
bool isPrime(int);

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    smallerPrime(n);
}

// NAIVE SOLUTION 
void smallerPrime(int n){
    // int i;
    for(int i=1 ; i<=n ; i++) {
        if(isPrime(i)) 
            cout<<i<<endl;
    }
    // Time comlexity is O(n*pow(n,1/2))
    return;
}
 
 bool isPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
        for(int i=5 ; i*i<=n ; i=i+6)
            if(n%i==0 || n%(i+2)==0) return false; 
    return true;
    // TIME COMPLEXITY FOR THIS APPROACH IS O(pow(n,1/2))
}