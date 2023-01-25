#include <bits/stdc++.h>
using namespace std;

//Finding Square root of a given number

// NAIVE APPROACH || Time complexity of this approach is Theta(pow(n,1/2)) which is not better than Theta(log(n))
// int SqrtFloor(int n){
//     int i=1;
//     while(i*i<n) i++;
//     return i-1;
// }

//  Time complexity of this approach is Theta(log(n))
int SqrtFloor(int n){
    int low=1,high=n/2 , ans=-1;
    if(n>=1){
        while(low<=high){
            int mid = (low+high)/2;
            if(mid*mid == n) return mid;
            else if(mid*mid > n) high=mid-1;
            else {
                low=mid+1;
                ans=mid;
            }
        }
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<SqrtFloor(n);
    return 0;
}
 