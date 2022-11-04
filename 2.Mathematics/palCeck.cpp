#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int digit=0;
    int n;
    cin>>n;
    int m=n;
    while(n){
        digit++;
        n=n/10;
    }
    int k=digit,num1=0;
    int i=0;
    while(m>0){
        int a=m%10;
        int b=m/pow(10,digit-1);
        cout<<digit<<endl;
        m=(m-b*(int)pow(10,digit-1)-a)/10;
        num1=num1 + b*pow(10,k-1)+b*pow(10,i);
        cout<<num1<<endl;
        digit=digit-2;
        k--;
        i++;
    }
    cout<<num1<<" num1";
    return 0;
}
