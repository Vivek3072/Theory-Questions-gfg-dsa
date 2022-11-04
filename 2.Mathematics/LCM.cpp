#include<iostream>
using namespace std;
int gcd(int,int);

int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;

    int gcdValue=gcd(a,b);
    cout<<a*(b/gcdValue)<<endl;
}

int gcd(int a , int b){
   if(b==0) return a;
   return gcd(b,a%b);
}

 
 
    // int smaller = min(a,b);
    // int bigger = max(a,b);
    // int gcdValue=gcd(a,b);

    // if( bigger%smaller==0 ) cout<<bigger<<endl;
    // else if(gcdValue==1) cout<<(a*b)<<endl;
    // else cout<<bigger*(smaller/gcdValue)<<endl;