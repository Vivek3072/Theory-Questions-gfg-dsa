#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[], int n){
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1])
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if( isSorted(a, n) ) cout<<"SORTED"<< endl;
    else cout<<"NOT SORTED";
    return 0;
}
