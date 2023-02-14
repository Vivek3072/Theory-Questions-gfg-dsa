#include <bits/stdc++.h>
using namespace std;

// Selection sort is not stable as it may change the order of two elements which are same respective to the order in the given array 
// Selection sort time complexity is Theta(pow(n,2))
// Here we are using constant extra space , so a better approach
void selectionSort(int arr[],int n){
  int count=0;

  for(int i=0;i<n-1;i++){
  int min_idx=i;
    for(int j=count;j<n;j++){
      if(arr[j] < arr[min_idx]){
        min_idx=j;
      }
    }
    cout<<"\nCount & min_idx are -"<<count<<min_idx;
    swap(arr[count],arr[min_idx]);
    count++;
  }
}

// Here we are using an extra array to store temp array 
// void selectionSort(int arr[],int n){
//   int min_idx=0;
//   int temp[n];
//   int count=0;

//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(arr[j] < arr[min_idx]){
//         min_idx=j;
//       }
//     }
//     temp[count]=arr[min_idx];
//     arr[min_idx]=INT32_MAX;
//     count++;
//   }
//   for(int i=0;i<n;i++) arr[i]=temp[i];
// }

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

  cout << "Before sorting: \n";
  for (int i=0; i < n; i++) {
    cout << arr[i] << " ";
  }

  selectionSort(arr, n);

  cout << "\nAfter sorting: \n";
  for (int i=0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
