// FINDING primeFactors
// 1 is neither prime nor composite 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primeFactors(int);
bool primeCheck(int);

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    primeFactors(n);
    return 0;
}

// EFFICIENT METHOD 
void primeFactors(int n){
    if(n<=1) return;
    if(primeCheck(n)) cout<<n<<endl;
    else{
        for(int i=2 ; i*i<=n ; i++) {
        // for(int i=2 ; i*i<=n , primeCheck(i) ; i++) {
            while(n%i==0) {  
            cout<<i<<endl;
            n=n/i;
            }
            cout<<"n :"<<n<<endl;
        }
        if(n>1) cout<<n<<endl;
    }

    // OVERALL TIME COMPLEXITY IS O(POW(n,1/2).log(n))
}

bool primeCheck(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
        for(int i=5 ; i*i<=n ; i=i+6)
            if(n%i==0 || n%(i+2)==0) return false; 
    return true;
    // TIME COMPLEXITY FOR THIS APPROACH IS O(pow(n,1/2))
}
