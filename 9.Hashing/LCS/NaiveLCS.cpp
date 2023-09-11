#include <bits/stdc++.h>
using namespace std;

//O(n*log(n))
int findLongestConsecutiveSubsequence(int arr[], int n){
    sort(arr,arr+n);
    int res=1,curr=1;
    for(int i=1;i<n;i++){
            
        if(arr[i]==arr[i-1]+1){
            curr++;
            res=max(res,curr);
        }
        else
            curr=1;
    }
    return res;
}

int main(){
    int arr[] = {1, 9, 3, 4, 2, 10, 13};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << findLongestConsecutiveSubsequence(arr, n);
    return 0;
}