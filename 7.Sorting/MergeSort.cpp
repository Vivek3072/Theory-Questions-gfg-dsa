// This is a divide and conqueer algorith , Its stable , it works in Theta(n*log(n)) time , it takes Big-O(n) extra space
#include <bits/stdc++.h>
using namespace std;

// Divide and conquer algorithm
// works in (n*log(n)) Time and O(n) auxillary space
// Well suited for linkedlists , works in O(1) auxillary space
// Used in external sorting
// In general for arrays QuickSort outPErforms it

void Merge(int arr[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;

    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++) left[i]=arr[l+i];
    for(int i=0 ; i<n2 ; i++) right[i]=arr[n1+i];

    for(auto i:left) cout<<i<<" ";
    cout<<"\nhello \n";
    for(auto i:right) cout<<i<<" ";
    
    
    
    // int low=l,mid=m;
    // int high=r;

    // int n1=mid-low+1;
    // int n2=high-mid;
    // int left[n1];
    // int right[n2];
    // for(int i=0; i<n1 ;i++) left[i]=arr[low+i];
    // for(int i=0; i<n2 ;i++) right[i]=arr[n1+i];

    // int i=0 ,j=0 ,k=0;
    // for( ;i<n1 && j<n2 ;){
    //     if(left[i] <= right[j]){
    //         arr[k]=left[i];
    //         i++; 
    //         k++;
    //     }
    //     else{
    //         arr[k]=right[j];
    //         j++;
    //         k++;
    //     }
    // }

    // while(i<n1) {
    //     arr[k]=left[i];
    //     i++;
    //     k++;
    // }
    // while(j<n2){
    //     arr[k]=right[j];
    //     j++;
    //     k++;
    // }
}

void MergeSort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        cout<<"Low , mid , right = "<<l<<m<<r<<endl;
        for(int i=0;i<=r ;i++) cout<<arr[i]<<" ";
        cout<<endl;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
 