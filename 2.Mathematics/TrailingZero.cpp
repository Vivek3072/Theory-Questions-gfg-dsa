// FINDING NUMBER OF TRAILING ZEROES
#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter number: ";
    cin>>n;
    
    for(int i=0;n>0 ;i++,n/=10){
     int r=n%10;
     if(r==0) count++;
     else break;
    }
    cout<<"The nmber of trailing zeroes is = "<<count<<endl;
    return 0;
}
