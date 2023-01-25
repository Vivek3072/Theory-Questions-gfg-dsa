#include <bits/stdc++.h>
using namespace std;

//Finding Square root of a given number

// NAIVE APPROACH || Time complexity of this approach is Big-O(position of x)
// int SearchInfiniteArray(int arr[], int n,int x){
//     for(int i=0 ; ;i++){
//         if(arr[i]==x) return i;
//         else if(arr[i]>x) return -1;
//     }
// }

int BinarySearch(int arr[] , int low,int high , int x){
    int mid;
    while(low<=high) {
        int mid = (low+high)/2;
        if(arr[mid] == x) return mid;
        else if( arr[mid] > x ) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

//  Time complexity of this efficient approach is Big-O(log(position of x))
int SearchInfiniteArray(int arr[],int n,int x){
    if(arr[0]==x) return 0;
    int nextPos=1;

    for(int i=1 ;  ;i=i*2){
        if(arr[i]>x){
            nextPos=i;
            break;
        }
    }
    return BinarySearch(arr,(nextPos/2)+1,nextPos-1,x);
}

int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ;i++) cin>>arr[i];
    cin>>x;
    cout<<SearchInfiniteArray(arr,n,x);
    return 0;
}
 