#include <iostream>
using namespace std;

// OR We can do like finding the first occurence of 1 in sorted binary array and then the answer will be ((size of array) - Index of first 1 )

int IndexOfFirstOccurence(int a[] , int low , int high , int x){
    int mid;
    while(low<=high) {
        int mid = (low + high )/2;
        if(a[mid] < x) low=mid+1;
        else if(a[mid] > x) high=mid-1;
        else{
            if(mid==0 || a[mid-1]!=a[mid]) return mid;
            else high=mid-1;
        }
    }
    return -1;
}

int IndexOfLastOccurence(int a[] , int low , int high , int x){
    int mid;
    while(low<=high) {
        int mid = (low + high )/2;
        if(a[mid] < x) low=mid+1;
        else if(a[mid] > x) high=mid-1;
        else{
            if(mid==0 || a[mid+1]!=a[mid]) return mid;
            else low=mid+1;
        }
    }
    return -1;
}

int CountOnes(int a[] , int low , int high , int x){
     
    int end=0;
    int start=IndexOfFirstOccurence(a,0,high,x);
    if(start==-1) return 0;
    else return (IndexOfLastOccurence(a,0,high,x)-start+1);
}

int main(){
    int n ;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];

    cout<<CountOnes(a,0,n-1,1);
    return 0;
}
