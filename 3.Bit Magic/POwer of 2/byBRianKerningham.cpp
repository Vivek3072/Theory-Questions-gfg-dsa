#include <bits/stdc++.h> 
using namespace std; 
// Theta(set bit i.e = 1 in power of 2)
//any power of 2 has only 1 set bit 

// int checkPower(int n) {
//     int count=0;
//     if(n==0) return 2; 

//     while(n!=0){
//         n=n&(n-1);
//         count++;
//     }
//     return count;
// }

bool checkThePower(int n) {
    // if(n==0) return false; 
    // return (n & (n-1) == 0 );
    
    return (n!=0) && ((n & (n-1)) == 0 );
}

int main() 
{ 
	int n ; 
    cin>>n;
	if(checkThePower(n)) cout<<"YES"; 
    else cout<<"NO";
	// if(checkPower(n)>1) cout<<"NO"; 
    // else cout<<"YES";
	return 0; 
} 
 