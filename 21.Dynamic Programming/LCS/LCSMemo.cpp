#include <bits/stdc++.h>
using namespace std;
// Longest Common Subsequence MEMOIZATION SOLUTION
// The worst case time complexity of this approach is Theta(m*n)

int memo[1000][1000];

int LCSMemoization(string s1, string s2, int m, int n){
    if (memo[m][n] != -1)
        return memo[m][n];
    if (n == 0 || m == 0)
        memo[m][n] = 0;
    else if (s1[m - 1] == s2[n - 1])
        memo[m][n] = 1 + LCSMemoization(s1, s2, m - 1, n - 1);
    else
        memo[m][n] = max(LCSMemoization(s1, s2, m - 1, n), LCSMemoization(s1, s2, m, n - 1));
    return memo[m][n];
}

int main(){
    string s1 = "axyz";
    string s2 = "baz";
    int m = s1.size();
    int n = s2.size();
    memset(memo, -1, sizeof(memo));
    int ans = LCSMemoization(s1, s2, m, n);
    cout<<ans<<" ";
   return 0;
}