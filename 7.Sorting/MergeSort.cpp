// This is a divide and conqueer algorith , Its stable , it works in Theta(n*log(n)) time , it takes Big-O(n) extra space
#include <bits/stdc++.h>
using namespace std;

// Divide and conquer algorithm
// works in (n*log(n)) Time and O(n) auxillary space
// Well suited for linkedlists , works in O(1) auxillary space
// Used in external sorting
// In general for arrays QuickSort outPErforms it

void MergeSort(int arr[],int n){
        
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    MergeSort(arr,n);
    return 0;
}
 