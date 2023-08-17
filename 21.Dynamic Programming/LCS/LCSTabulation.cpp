#include <iostream>
using namespace std;
// Longest Common Subsequence TABULATION SOLUTION
// The worst case time complexity of this approach is Theta(m*n)

int LCSTabulation(string s1, string s2, int m, int n){
        int dp[m+1][n+1];
        
        for(int i=0;i<=m;i++)
            dp[i][0]=0;

        for(int j=0;j<=n;j++)
            dp[0][j]=0;
            
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(s1[i-1]==s2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
}

int main(){
    string s1 = "axyz";
    string s2 = "baz";
    int m = s1.size();
    int n = s2.size();
    int ans = LCSTabulation(s1, s2, m, n);
    cout<<ans<<" ";

   return 0;
}