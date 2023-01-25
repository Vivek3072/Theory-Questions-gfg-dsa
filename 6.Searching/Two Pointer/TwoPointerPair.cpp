#include<bits/stdc++.h>
using namespace std;

// Que :- Given an unsorted array and an integer x , find whether there is a pair in the array whose sum is equal to x.

// TWO POINTER APPROACH | Applicable whether array is sorted | Time complexity of this algo is Big-O(n)
// When array is unsorted then hashing approach is better and whe array is sorted then Two pointer is better , because is sorting the array it will take O(nlog(n)) extra time
bool TwoPointerPair(int arr[] , int n,int x){
    int low=0,high=n-1,mid;

    // while(low<=high){
    while(low<high){
        if(arr[low] + arr[high] == x) return true;
        else if( arr[low] + arr[high] > x ) high--;
        else low++;
    }
    return false;
}


int main(){
    
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int x; cin>>x;
    if(TwoPointerPair(arr,n,x)) cout<<"YES";
    else cout<<"NO";

    return 0;
}
