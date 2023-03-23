#include <iostream>
using namespace std;

int BinarySearch(int a[] , int n , int x){
    int low =0 , high =n-1 , mid;
    while(low<=high) {
        int mid = (low+high)/2;
        // cout<<mid<<endl;
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
    int n ,k;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    cin>>k;
    int b[k];
    for(int i=0 ; i< k ; i++) cin>>b[i];

    for(int i=0 ; i<k ;i++){
        cout<<BinarySearch(a,n,b[i])<<" ";
    }
    return 0;
    
}
 