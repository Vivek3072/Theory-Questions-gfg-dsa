#include <bits/stdc++.h>
using namespace std;

// Worst case time complexity is Theta(n^2) , best case time complexity is Theta(n) , SO in general its BigO(n^2)
// It's in place and stable sorting algorithm and used in practice for small arrays(TimSort and IntroSort)
// These two algos are called hybrid because , Tim sort uses merge sort(nLog(n) and insertion sort) IntroSort uses Heapsort and InsertionSort 
void InsertionSort(int arr[],int n){
  
  for(int i=1;i<n;i++){
    int key=arr[i];
    int j=i-1;
    // while(j>=0 && arr[j]>=key){ in this case the algorithm won't be stable
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
  }
}

int main() {
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

  cout << "Before sorting: \n";
  for (int i=0; i < n; i++) {
    cout << arr[i] << " ";
  }

  InsertionSort(arr, n);

  cout << "\nAfter sorting: \n";
  for (int i=0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
