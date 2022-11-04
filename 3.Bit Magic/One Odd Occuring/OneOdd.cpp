#include <bits/stdc++.h> 
using namespace std; 

void checkOneOdd(int a[],int n) {

    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==a[i]) count++;
        }
        if(count%2!=0)
cout<<i<<endl;
    }

}

int main() 
{ 
	int n ; 
    cin>>n;
   int a[n];

    for(int i=0;i<n;i++ ) cin>>a[i];
	checkOneOdd(a,n);
	return 0; 
} 
 