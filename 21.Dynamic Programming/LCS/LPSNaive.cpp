#include <bits/stdc++.h>
using namespace std;
// LONGEST PALINDROMIC SUBSEQUENCE NAIVE RECURSIVE METHOD

// SINCE TWO PARAMETERS ARE CHANGING SO THE NUMBER OF DIMENSION OF DP ARRAY SHOULD BE 2
class Solution {
public:
    int LPS(string s, string sRev, int m, int n){
        if(m == 0 || n == 0)
            return 0;
        if(s[m-1] == sRev[n-1])
            return 1 + LPS(s, sRev, m-1, n-1);
        else
            return max(LPS(s, sRev, m-1, n), LPS(s, sRev, m, n-1));
    }
    int longestPalindromeSubseq(string s) {
        string sRev = s;
        reverse(sRev.begin(), sRev.end());
        int m = s.size();
        int n = sRev.size();
        return LPS(s, sRev, m, n);
    }
};

int main(){
    Solution sol;
    cout<<"LONGEST PALINDROMIC SUBSEQUENCE IS :"<<sol.longestPalindromeSubseq("euazbipzncptldueeuechubrcourfpftcebikrxhybkymimgvldiwqvkszfycvqyvtiwfckexmowcxztkfyzqovbtmzpxojfofbvwnncajvrvdbvjhcrameamcfmcoxryjukhpljwszknhiypvyskmsujkuggpztltpgoczafmfelahqwjbhxtjmebnymdyxoeodqmvkxittxjnlltmoobsgzdfhismogqfpfhvqnxeuosjqqalvwhsidgiavcatjjgeztrjuoixxxoznklcxolgpuktirmduxdywwlbikaqkqajzbsjvdgjcnbtfksqhquiwnwflkldgdrqrnwmshdpykicozfowmumzeuznolmgjlltypyufpzjpuvucmesnnrwppheizkapovoloneaxpfinaontwtdqsdvzmqlgkdxlbeguackbdkftzbnynmcejtwudocemcfnuzbttcoew");
  
    return 0;
}