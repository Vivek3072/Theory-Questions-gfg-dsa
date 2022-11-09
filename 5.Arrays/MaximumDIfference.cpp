#include <bits/stdc++.h>
using namespace std;

// EFFICIENT METHOD , Theta(1) auxillary space and O(n) time complexity
int MaximumDIfference(int a[] , int n ){
    int res=a[1]-a[0],minValue=a[0];
    for(int i=1;i<n;i++){
       res=max(res,a[i]-minValue);
       minValue=min(minValue,a[i]);
    }
    return res;
}

// // NAIVE METHOD , Theta(1) auxillary space and O(n^2) time complexity
// int MaximumDIfference(int a[] , int n ){
//     int max1=INT_MIN;
//     // int max=a[1]-a[0];
//     for(int i=0;i<n;i++){
//         for(int j=i+1 ;j<n;j++){
//             if(a[j]-a[i]>max1){
//                 max1=a[j]-a[i];
//             }
//             // max1=max(max1,a[j]-a[i]);
//         }
//     }
//     return max1;
// }

int main(){
    int n ;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    int maxDiff = MaximumDIfference(a,n);
    cout<<maxDiff;

    return 0;
}
 