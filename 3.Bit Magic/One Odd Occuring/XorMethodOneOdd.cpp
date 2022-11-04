#include <bits/stdc++.h> 
using namespace std; 
// PROPERTIES OF XOR OPERATOR  
// X^0=x
// x^y=y^X
// x^(y^z)=(x^y)^z
// x^x=0


int checkOneOdd(int a[],int n) {

    int res=0;
    for(int i=0 ; i<n ;i++) res=res^a[i];
    return res;

}

int main() 
{ 
	int n ; 
    cin>>n;
   int a[n];

    for(int i=0;i<n;i++ ) cin>>a[i];
	int y=checkOneOdd(a,n);
    cout<<y<<endl;
	return 0; 
} 
 