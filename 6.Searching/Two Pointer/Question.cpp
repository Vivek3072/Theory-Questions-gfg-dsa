#include<bits/stdc++.h>
using namespace std;

// Que :- Given an unsorted array and an integer x , find whether there is a pair in the array whose sum is equal to x.

// NAIVE APPROACH , applicable whether array is sorted,unsorted
bool FindPair(int arr[] , int n,int x){
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]+arr[j]==x)
                return true;
        }
    }
    return false;
}

int main(){
    
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int x; cin>>x;
    if(FindPair(arr,n,x)) cout<<"YES";
    else cout<<"NO";

    return 0;
}
 