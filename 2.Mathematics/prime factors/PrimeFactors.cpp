// FINDING primeFactors
// 1 is neither prime nor composite 

#include<iostream>
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

// NAIVE METHOD 
void primeFactors(int n){
    
    for(int i=2 ; i<=n/2 ; i++) // loop runs n times so O(n)
        if(n%i==0 && primeCheck(i)){ //primeCheck time complexity O(n) , but here O(pow(n,1/2)
            int x=i;
            while(n%x==0) {  // time complexity while loop here is O(log(n))
            cout<<i<<endl;
            x=x*i;
       }
    }
    // OVERALL TIME COMPLEXITY IS O(n^2.log(n))
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
