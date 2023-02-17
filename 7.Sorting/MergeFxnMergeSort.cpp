// This is a divide and conqueer algorith , Its stable , it works in Theta(n*log(n)) time , it takes Big-O(n) extra space
#include <bits/stdc++.h>
using namespace std;

// EFFICIENT SOLUTION , it takes Theta(m+n) time

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int low,mid;
    cin>>low>>mid;
    int high=n-1;

    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1];
    int right[n2];
    for(int i=0; i<n1 ;i++) left[i]=arr[low+i];
    for(int i=0; i<n2 ;i++) right[i]=arr[n1+i];
    
     int i=0 ,j=0 ,k=0;
    for(; i<n1 && j<n2 ; ){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
            k++;
        }else{
            arr[k]=right[j];
            j++;
            k++;
        }
    }
    while(i<n1) {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }

    for(auto x:arr) cout<<x<<" ";
    return 0;
}
 