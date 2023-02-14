// This is a divide and conqueer algorith , Its stable , it works in Theta(n*log(n)) time , it takes Big-O(n) extra space
#include <bits/stdc++.h>
using namespace std;

// EFFICIENT SOLUTION , it takes Theta(m+n) time
void MergeTwoSortedArr(int arr1[],int arr2[],int m,int n){
    int i=0,j=0 ;
        while(i<m && j<n){
            if(arr1[i]<=arr2[j]){
                // Here in "<=" , equality is important for the stability
                cout<<arr1[i]<<" ";
                i++;
            }
            else{
                cout<<arr2[j]<<" ";
                j++;
            }
        }
        while(i<m){ 
            cout<<arr1[i]<<" "; 
            i++;
        }
        while(j<n){ 
            cout<<arr2[j]<<" "; 
            j++;
        }
}

int main(){
    int m,n;
    cin>>m>>n;
    int arr1[m];
    int arr2[n];
    for(int i=0;i<m;i++) cin>>arr1[i];
    for(int i=0;i<n;i++) cin>>arr2[i];
    MergeTwoSortedArr(arr1,arr2,m,n);
    return 0;
}
 