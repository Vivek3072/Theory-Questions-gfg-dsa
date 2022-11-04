#include <iostream>
using namespace std;

// Efficient METHOD with O(n) time complexity and O(1) auxillary space
int removeDuplicates(int a[] , int n){
    int res=1;
    for (int i = 1 ; i < n ; i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
        }

    for (int i = 0; i < res ; i++) cout<<a[i]<<" ";
    return res;
}

int main(){
    int n;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    int result = removeDuplicates(a,n);
    cout <<"\n"<<result;
    return 0;
}



// // NAIVE METHOD O(n) time complexity as well as auxillary space
// int removeDuplicates(int a[] , int n){
//     int temp[n];
//     temp[0]=a[0];
//     int res=1;
//     for (int i = 1 ; i < n ; i++){
//         if(temp[res-1]!=a[i]){
//             temp[res]=a[i];
//             res++;
//         }
//     }
//     for (int i = 0; i < res ; i++) {
//         a[i]=temp[i];
//         cout<<temp[i]<<" ";
//     }
//     return res;
// }
