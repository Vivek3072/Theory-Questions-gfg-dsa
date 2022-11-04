#include <iostream>
using namespace std;

void insert(int a[], int n, int x, int pos, int cap){
    int idx = pos - 1;

    for (int i = n-1 ; i >= idx ; i--) a[i + 1] = a[i];
    a[idx] = x;
    for (int i = 0; i < n; i++) cout << a[i] << " ";
}

int main(){
    int n, x, pos, cap = 0;
    cin >> n >> x >> pos;

    int a[n];
    for (int i = 0; i < n - 1; i++){
        cin >> a[i];
        cap++;
    }
    if (n == cap) return n;
    insert(a, n, x, pos, cap);
    return 0;
}
