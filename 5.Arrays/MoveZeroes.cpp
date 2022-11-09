#include <bits/stdc++.h>
using namespace std;

// EFFICIENT SOLUTION TO MOVE ZEROES TO END O(n) time complexity
void moveZeroes(int a[] , int n){
    int count=0;
    for (int i = 0 ; i < n ; i++){
        if(a[i]!=0) {
            swap(a[i],a[count]);
            count++;
        }
    }
}

// NAIVE SOLUTION(2) (by swapping zero with first next non-zero number) TO MOVE ZEROES TO END O(n^2) time complexity
// void moveZeroes(int a[] , int n){
//     for (int i = 0 ; i < n ; i++){
//         if(a[i]==0){
//             for (int j = i+1 ; j < n ; j++){
//                 if(a[j]!=0) {
//                     swap(a[i],a[j]);
//                     break;
//                 }
//             }
//         }
//     }
// }

// // NAIVE SOLUTION(1) (by comparing consecutive numbers and moving zeroes to right) TO MOVE ZEROES TO END O(n^2) time complexity
// void moveZeroes(int a[] , int n){
//     for (int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n-1 ; j++){
//             if(a[j]==0){
//                 int temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }
//         }
//     }
// }

int main(){
    int n;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    moveZeroes(a,n);
    for (int i = 0; i < n ; i++) cout<< a[i]<<" ";
    return 0;
}

