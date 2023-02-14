#include<iostream>
using namespace std;

// Time complexity is Theta(n^2)
void BubbleSort(int arr[] , int n){
// In 1st iteration we are moving the first largest element to the last position of the array , in 2nd iteration 2nd largest to 2nd last position and so on
    for(int i=0;i<n;i++){
        bool swapped =false;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
                swapped=true;
            }
        }
        if(swapped==false) break;
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    BubbleSort(arr,n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
 