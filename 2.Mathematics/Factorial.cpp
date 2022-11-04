// FINDING FACTORIAL
#include<iostream>
using namespace std;
int fact(int);

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    int y=fact(n);
    cout<<"The FACTORIAL is = "<<y<<endl;
    return 0;
}

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
// Time complexity for this is T(n) = T(n-1)+ O(1) i.e, theta(1)
// so Time colplexity and auxillary space is Theta(n) after calculating from above formula tree method 


// int fact=1;
// for(int i=2;i<=n;i++) fact*=i;
// so Time colplexity Theta(n) and auxillary space is theta(1)