#include <bits/stdc++.h>
using namespace std;

// Peak Element is the element which is not smaller than its neighbours

// NAIVE SOLUTION
// void PeakElement(int arr[] , int n ){
//     if(n==0) cout<<arr[0]<<" ";
//     if(n>=2) if(arr[0]>arr[1]) cout<<arr[0]<<" ";

//     for(int i=0;i<n-2;i++){
//         if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2]) cout<<arr[i+1]<<" ";
//     }
//     if(n>=2 && arr[n-1]>arr[n-2]) cout<<arr[n-1]<<" ";
// }

// Efficient Solution with Big-O(log(n)) Time complexity
int PeakElement(int arr[],int n){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1])) return mid;
        if(mid>0 && arr[mid-1]>=arr[mid]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main(){
    int n;
    cin >> n ;

    int arr[n];
    for (int i = 0; i < n ; i++) cin >> arr[i];

    cout<<"Peak Elements(s) = ";
    PeakElement(arr,n);

    return 0;
}

