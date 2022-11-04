#include<iostream>
#include <cmath>
using namespace std;
// counting set bits(1) in binary expansion of unsigned numbers
int BrianKerningam(int);

int main(){
    int n;
    cin>>n;
    int y = BrianKerningam(n);
    cout<<y<<endl;
}

int BrianKerningam( int n ){

    int count=0;

    while( n > 0 ){
        n=n&(n-1);
        count++;
    }
    // It will run Big O(set bit count) time complexity  

    return count;
}
 
 