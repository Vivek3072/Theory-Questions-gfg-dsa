// FINDING IF NUMBER IS PRIME OR NOT
// 1 is neither prime nor composite 

#include<iostream>
using namespace std;
bool primeCheck(int);

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    
    int y=primeCheck(n);
    if(y) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
    return 0;
}

// MORE EFFICIENT METHOD 
bool primeCheck(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
        for(int i=5 ; i*i<=n ; i=i+6)
            if(n%i==0 || n%(i+2)==0) return false; 
    return true;
    // TIME COMPLEXITY FOR THIS APPROACH IS O(pow(n,1/2))
}

// EFFICIENT METHOD 
// bool primeCheck(int n){
//     if(n==1) return false;
//         for(int i=2 ; i*i<=n ; i++)
//             if(n%i==0) return false; 
//     return true;
//     // TIME COMPLEXITY FOR THIS APPROACH IS O(pow(n,1/2))
// }

// NAIVE METHOD 
// bool primeCheck(int n){
//     if(n==1) return false;
//         for(int i=2 ; i<=n/2 ; i++)
//             if(n%i==0) return false; 
//     return true;

// }

