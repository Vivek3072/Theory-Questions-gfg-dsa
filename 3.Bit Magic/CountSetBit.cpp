#include<iostream>
#include <cmath>
using namespace std;
// counting set bits(1) in binary expansion of unsigned numbers
int CountSetBit(int);

int main(){
    int n;
    cin>>n;
    int y = CountSetBit(n);
    cout<<y<<endl;
}

int CountSetBit( int n ){

    int count=0;

    while( n > 0 ){
        if(n%2 !=0) count++;
     n=n/2; //or n=n>>1;
    }
    // It will run log2(n) time complexity , and diving by 2 shifts the bits to right by 1 unit 
    // Dividing by two (n=n/2) is similiar to (n=n>>1)

    return count;
}


// int CountSetBit( int n ){
//     int count=0;
//     It will run log2(n) time complexity 
//     for(int i=0 ; i<(int)log2(n)+1 ; i++ ){
//         //   if(n>>i==0) break;
//         cout<<(int)log2(n)+1<<"hey"<<endl;
//         if( (1 & (n>>i)) == 1 )
//           count++;
//     }
//  }


// int CountSetBit( int n ){
//     int count=0;
//     count = count + (n&1);
//     n=n>>1;
//  }


