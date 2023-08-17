#include <iostream>
using namespace std;

#define MAX_N 100  

int fibonacci(int n) {
    int f[MAX_N + 1];
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i<=n ; i++)
        f[i] = f[i-1] + f[i-2];
    return f[n];
}

int main(){
    int n = 7;
    int result = fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << result << endl;
    return 0;
}