#include <iostream>
using namespace std;

int largestElement(int a[], int n){    
    int large = a[0] ;

    for (int i = 0; i < n; i++)
             if( a[i] > large )
             {
                large = a[i];
             }
    return large;
}

int main(){
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    
    cout<<largestElement(a, n)<<endl;
    return 0;
}
