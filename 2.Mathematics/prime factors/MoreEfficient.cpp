// FINDING primeFactors
// 1 is neither prime nor composite 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void primeFactors(int);
bool primeCheck(int);

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    primeFactors(n);
    return 0;
}

// MORE EFFICIENT METHOD 
void primeFactors(int n){
    if(n<=1) return;
    if(primeCheck(n)) cout<<n<<endl;
    else{
        	while(n % 2 == 0){
		cout<<2<<" ";
		n = n / 2;
	}
	while(n % 3 == 0){
		cout<<3<<" ";
		n = n / 3;
	}

        for(int i=5 ; i*i<=n ; i=i+6) {
           	while(n % i == 0){
			cout<<i<<" ";
			n = n / i;
		}

		while(n % (i + 2) == 0){
			cout<<(i + 2)<<" ";
			n = n / (i + 2);
		}
        }
        if(n>3) cout<<n<<endl;
}

    // OVERALL TIME COMPLEXITY IS O(POW(n,1/2).log(n))
}

bool primeCheck(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
        for(int i=5 ; i*i<=n ; i=i+6)
            if(n%i==0 || n%(i+2)==0) return false; 
    return true;
    // TIME COMPLEXITY FOR THIS APPROACH IS O(pow(n,1/2))
}
