// FINDING IF NUMBER IS A PALINDROME NUMBER
#include<iostream>
using namespace std;

// LOGARITHMIC APPROACH

int main(){
    int n,y=0;
    cout<<"Enter number: ";
    cin>>n;
    int m=n;

    for(int i=0;m>0;i++,m/=10){
    //reverse of digits
        int x=m%10;
        y = y*10 +x;
    }
    cout<<"The Reverse of nmber is = "<<y<<endl;
    if(y==n) cout<<"\nPalindrome Number";
    else cout<<"\nNot Palindrome";
    return 0;
}
