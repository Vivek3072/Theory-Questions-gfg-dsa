#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int largestElement(int a[], int n){
    int large1 = INT_MIN;
    int large2 = INT_MIN;
    int count = 0;

    int largeNoIdx = 0;
    for (int i = 0; i < n; i++){
        if (a[i] == a[0])
            count++;

        if (a[i] > large1){
            large1 = a[i];
            largeNoIdx = i;
        }
    }
        if (count == n ) return -1;

    for (int i = 0; i < n; i++)
        if ((i != largeNoIdx) && (a[i] > large2) && (a[i]!=large1) )
            large2 = a[i];

    return large2;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << largestElement(a, n) << endl;
    return 0;
}
