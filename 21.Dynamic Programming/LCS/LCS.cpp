#include <iostream>
using namespace std;
// Longest Common Subsequence NAIVE RECURSIVE SOLUTION
// The worst case time complexity of this approach is exponential i.e, upper bound of the series is pow(2,n)

int longestCommonSubsequence(string s1, string s2, int m, int n){
    if(m == 0 || n == 0)
        return 0;
    if(s1[m-1] == s2[n-1])
        return 1 + longestCommonSubsequence(s1, s2, m-1, n-1);
    else
        return max(longestCommonSubsequence(s1, s2, m-1, n), longestCommonSubsequence(s1, s2, m, n-1));
}

int main(){
    string s1 = "axyz";
    string s2 = "baz";
    int m = s1.size();
    int n = s2.size();
    int ans = longestCommonSubsequence(s1, s2, m, n);
    cout<<ans<<" ";

   return 0;
}