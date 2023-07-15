#include <iostream>
#include <string>
using namespace std;
// Find maximum no. of pieces such that every rope(n) has a length of either a,b,c units

// Time = O(3^n)
int ropeCutting(int n,int a, int b, int c){
    if( n == 0)
        return 0;
    else if(n < 0)
        return -1;

    int res = max(max(ropeCutting(n-a,a,b,c) , ropeCutting(n-b,a,b,c)) , ropeCutting(n-c,a,b,c));
    if(res == -1) return -1;
    return res+1;
}

int main(){
    int n = 9;
    int a = 2, b = 2 , c = 2;
    cout<<"\nMax no. of pieces : "<<ropeCutting(n,a,b,c)<<endl;
    cout<<"\n";
    return 0;
}
 

// This approach fails for the corner case n = 47, a = 11, b= 9 , c=12; as we are adding 1 to all numbers n1,n2,n3 without checking if they are valid or not
// as if recurSive fxn returns -1 we add +1 to it and make it a valid by making 1-1 =0
//  int ropeCutting(int n,int a, int b, int c){
//     if( n == 0)
//         return 0;
//     else if(n < 0)
//         return -1;

//     int n1 = 1 + (ropeCutting(n-a,a,b,c));
//     int n2 = 1 + (ropeCutting(n-b,a,b,c));
//     int n3 = 1 + (ropeCutting(n-c,a,b,c));

//     return n1>n2? (n1>n3 ? n1:n3) : n2;
// }
