#include <iostream>
using namespace std;

int BinaryRecursive(int a[] , int n , int x , int low , int high){
    int mid;
    if(low>high) return -1;

        int mid = (low+high)/2;
        if(a[mid] == x){
            return mid;
        }
        else if( a[mid] > x ){
           BinaryRecursive(a,n,x,low,mid-1);
        }
        else{
           BinaryRecursive(a,n,x,mid+1,high);
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

    if(BinaryRecursive(a,n,x,0,n-1)>=0)
        cout <<"Element present at index :"<<BinaryRecursive(a,n,x,0,n-1);
    else
        cout <<"Element not present ";
    return 0;
}
 