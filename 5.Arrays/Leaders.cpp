#include <bits/stdc++.h>
using namespace std;

// Efficient METHOD , Theta(1) auxillary space and O(n) time complexity
void isLeader(int a[] , int n ){
    int leaderElem = a[n-1];
    cout<<leaderElem<<" ";
    for(int i=n-1 ; i>0  ; i-- )
        if(a[i-1] > leaderElem){
            leaderElem=a[i-1];
            cout<<leaderElem<<" ";
        }
}

// // NAIVE METHOD , Theta(1) auxillary space and O(n^2) time complexity
// bool isLeader(int a[] , int n ,int i ){
//     for(int j=i+1 ; j<n ; j++ )
//         if(a[i] <= a[j])
//             return false;
//     return true;
// }

int main(){
    int n ;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    
    // Uncomment this for proceeding with NAIVE METHOD 
    // for (int i = 0; i < n ; i++)
    //     if(isLeader(a,n,i))
    //         cout<<a[i]<<" ";

    // Code this for proceeding with Efficient METHOD 
    isLeader(a,n);

    return 0;
}
 