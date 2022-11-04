#include <bits/stdc++.h>

using namespace std;

int getMaximumBalancedSubstrings(int L, int R) {
  int maximumBalancedSubstrings = 0;

  // TODO: Complete this function to compute the maximum possible number of
  // non-empty substrings that form a balanced parenthesis.

  return maximumBalancedSubstrings;
}

int main() {
  int T;
  // Get number of test cases
  cin >> T;
  for (int tc = 1; tc <= T; tc++) {
    int L, R;
    cin >> L >> R;
    cout << "Case #" << tc << ": " << getMaximumBalancedSubstrings(L, R)
         << endl;
  }
  return 0;
}





// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
    
//    for(int i=1;i<=t;i++){
//         int m,n,sum=0;
//         cin>>n>>m;
        
//         int c[n];
//         for(int i=0;i<n;i++) {
//             cin>>c[i];
//             sum+=c[i];
//         }
        
//         cout<<"Case #"<<i<<": "<<( sum%m )<<endl;
//     }
//     return 0;
// }

