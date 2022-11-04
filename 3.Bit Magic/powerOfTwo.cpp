#include <bits/stdc++.h> 
using namespace std; 

bool checkPower(int n) {

    if(n==0) return false;
    while(n!=1) {
        if(n%2!=0)
        return false;
        n=n/2;
    }
     return true;


    // if(n==0) return false;
    // for(int i=1 ; i*i<n ; i++) if(n%2!=0) return false;
    //  return true;
}

int main() 
{ 
	int n ; 
    cin>>n;
	if(checkPower(n)) cout<<"YES"; 
    else cout<<"NO";
	return 0; 
} 
 