#include <iostream>
using namespace std;

void deleteArr(int a[], int n, int x, int pos, int cap){
    int idx = pos - 1;

        if(a[idx]==x) for(int i = idx ; i < n ; i++ ) a[i] = a[i+1];
    
    a[n-1] = {};
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}

int main(){
    int n, x, pos, cap = 0;
    cin >> n >> x >> pos;

    int a[n];
    for (int i = 0; i < n ; i++){
        cin >> a[i];
        cap++;
    }
    // if (n == cap) return n;
    deleteArr(a, n, x, pos, cap);
    return 0;
}


// Returning The size of the array 
// int deleteArr(int a[], int n, int x){
//     int i;
//     for(int i = idx ; i < n ; i++ ) if(a[i]==x) break;

//     if(i==n) return n;
    
//    for(int j=i ; j<n-1 ; j++) a[j]=a[j+1];
//     return (n-1)
// }