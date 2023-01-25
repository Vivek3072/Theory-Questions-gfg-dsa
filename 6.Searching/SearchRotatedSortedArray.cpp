#include <iostream>
using namespace std;

int SearchRotatedArray(int arr[] , int n , int x){
    int low =0 , high =n-1 , mid;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x) return mid;
        
        // LEFT HALF SORTED 
        if(arr[mid]>arr[low]){
            if(arr[low]<=x && arr[mid]>x) high=mid-1;
            else low=mid+1;
        }
        // RIGHT HALF SORTED 
        else{
            if(arr[high]>x && arr[mid]<=x) low=mid+1;
            else high=mid-1;
        }
    }

    return -1;
}

int main(){
    int n ,x;
    cin >> n ;

    int arr[n];
    for (int i = 0; i < n ; i++) cin >> arr[i];
    cout<<"Enter element to search : ";
    cin >> x ;

    cout<<SearchRotatedArray(arr,n,x);

    return 0;
}

