// FINDING AP , GP
#include<iostream>
#include<math.h>
using namespace std;

// LOGARITHMIC APPROACH
int by_Log(int n){
    return floor(log10(n)+1);
}

int main(){
    //number of digits
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int count=by_Log(n);
   
    cout<<"No of digits = "<<count<<endl;
    return 0;
}
