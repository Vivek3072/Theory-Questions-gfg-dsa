#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100  
int memo[MAX_N + 1];

int fibonacci(int n) {
    if (memo[n] == -1) {
        int res = 0;
        if (n == 0 || n == 1)
            res = n;
        else
            res = fibonacci(n - 1) + fibonacci(n - 2);
        memo[n] = res;
    }
    return memo[n];
}

int main() {
    int n = 7;
    memset(memo, -1, sizeof(memo));
    int result = fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << result << endl;
    return 0;
}
