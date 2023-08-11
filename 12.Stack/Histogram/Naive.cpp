#include<iostream>
#include<stack>
#include<vector>
using namespace std;

// For every bar in array we consider the current bar to be the smallest and we move to the right and left of the current bar as soon as we find the next smaller element we stop and calculate the area as the height of current bar * difference between the indices of left and right bars

// TTIME COMPLEXITY is O(n^2)
int getMaxArea(int arr[],int n){
    int res=0;

    for(int i=0;i<n;i++){
        int curr=arr[i];

        for(int j=i-1;j>=0;j--){
            if(arr[j]>=arr[i])curr+=arr[i];
            else break;
        }
        
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i])curr+=arr[i];
            else break;
        }

        res=max(res,curr);
    }
    return res;
}

int main() {
    int arr[]={6,2,5,4,1,5,6};
    int n=7;
    cout<<"Maximum Area: "<<getMaxArea(arr,n);
    return 0; 
}
