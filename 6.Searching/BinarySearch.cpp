#include <iostream>
using namespace std;

int BinarySearch(int a[] , int n , int x){
    int low =0 , high =n-1 , mid;
    while(low<=high) {
        int mid = (low+high)/2;
        cout<<mid<<endl;
        if(a[mid] == x){
            return mid;
        }
        else if( a[mid] > x ){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    return -1;
}

int main(){
    int n ,x;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    cout<<"Enter element to search : ";
    cin >> x ;

    if(BinarySearch(a,n,x)>=0)
        cout <<"Element present at index :"<<BinarySearch(a,n,x);
    else
        cout <<"Element not present ";
    return 0;
}

