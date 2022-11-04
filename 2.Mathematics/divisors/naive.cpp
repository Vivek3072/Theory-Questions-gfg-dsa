//Finding all divisors of a number in sorted manner
#include<iostream>
using namespace std;
void divisors(int);

int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    
    divisors(a);
}

void divisors(int a){
    int i;
    for( i=1 ; i*i<a ; i++) if(a%i==0) cout<<i<<endl;
    for( ; i>=1 ; i--) if(a%i==0) cout<<a/i<<endl;
    // Time colplexity of both the loops is Theta(pow(n,1/2)) hence overall Time cmplexity is also the same
    return;
}
 
//  UNSORTED ORDER 
// void divisors(int a){
//     for(int i=1 ; i*i<=a ; i++){
//         if(a%i==0) {
//             cout<<i<<endl;
//            if(i!=a/i) cout<<a/i<<endl;
//         }
//     }
//     return;
// }
 