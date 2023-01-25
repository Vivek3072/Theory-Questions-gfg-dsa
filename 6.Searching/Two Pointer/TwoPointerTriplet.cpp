#include<bits/stdc++.h>
using namespace std;

//NAIVE solution will run three nested for loops then check whether arr[i]+arr[j]+arr[k]==x. This takes Big-O(pow(n,3)) time


bool TwoPointerPair(int arr[] , int low,int high,int x){
    // while(low<=high){
    while(low<high){
        if(arr[low] + arr[high] == x) 
            return true;
        else if( arr[low] + arr[high] > x ) 
            high--;
        else 
            low++;
    }
    return false;
}


// Here we can sort the array(better than hashing approach as it wont take extra auxillary space) as sorting takes O(nlog(n)) and then O(pow(n,2)) so overall comes , O(pow(n,2))
bool TwoPointerTriplet(int arr[] , int n,int x){
    for(int i=0 ; i<n;i++) 
        if(TwoPointerPair(arr,i+1,n-1,x-arr[i])) 
            return true;
    return false;
}

 int main(){
    
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    int x; cin>>x;

    if(TwoPointerTriplet(arr,n,x)) cout<<"YES";
    else cout<<"NO";

    return 0;
}
