#include <bits/stdc++.h>
using namespace std;
// Left rotation is counterclockwise


// METHOD(3) REVERSAL ALGORITHUM , Theta(1) extra space i.e, auxillary space and O(n) time complexity
void rotateLeft(int a[] , int n , int deg){
    reverse(a,0,deg-1);
    reverse(a,deg,n-1);
    reverse(a,0,n-1);
}
void reverse(int a[] , int low , int high){
    while(low<high){
        swap(a[low],a[high]);
        low++;
        high--;
    }
}

// // METHOD(2) Requires Theta(deg) extra space i.e, auxillary space and O(n) time complexity 
// void rotateLeft(int a[] , int n , int deg){
//     int dup[deg];
//     for (int i = 0 ; i < deg ; i++){
//         dup[i]=a[i];
//     }
//     for (int i = deg ; i < n ; i++){
//         a[i-deg]=a[i];
//     }
//     for (int i = n-deg , j=0 ; i < n ; i++ , j++ ){
//         a[i]=dup[j];
//     }
// }

int main(){
    int n , deg;
    cin >> n >> deg;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    rotateLeft(a,n,deg);
    for (int i = 0; i < n ; i++) cout<< a[i]<<" ";
    return 0;
}
