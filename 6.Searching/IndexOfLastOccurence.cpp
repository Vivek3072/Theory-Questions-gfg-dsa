#include <iostream>
using namespace std;

// Recursive Approach take O(logn) time complexity and O(logn) space complexity
// int IndexOfLastOccurence(int a[] , int low , int high , int x){
//   if(low>high) return -1;
//   int mid=(low+high)/2;
//    if(a[mid] < x) return IndexOfLastOccurence(a , mid+1 , high , x);
//   else if(a[mid] > x) return IndexOfLastOccurence(a , low , mid-1 , x);
//   else{
//     if(mid==0 || a[mid-1]!=a[mid]) return mid;
//     else return IndexOfLastOccurence(a,low,mid-1,x);
//   }
// }

// Iteraive Approach take O(logn) time complexity and O(1) space complexity
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

int main(){
    int n ,x;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    cin >> x ;

    if(IndexOfLastOccurence(a,0,n-1,x)>=0)
        cout <<"Element present at index :"<<IndexOfLastOccurence(a,0,n-1,x);
    else
        cout <<"Element not present ";

    return 0;
}
