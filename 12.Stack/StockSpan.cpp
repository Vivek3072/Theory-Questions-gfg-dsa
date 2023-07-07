//  EFFICIENT SOLUTION APPROACH IS ---------
//  for 1st element span is always 1
//  Span = (Index of current element) - (Index of closest greater element) // IF THERE IS A GREATER ELEMENT TO THE LEFT SIDE
//  otherwise
//  Span = INdex of currrent element + 1
#include <bits/stdc++.h>
using namespace std;

void printSpan(int arr[],int n,vector<int>& mySpan){
    stack<int> s ;
    s.push(0);
    mySpan.push_back(1);

    for(int i=1;i<n;i++){
        while(s.empty()==false && arr[s.top()]<=arr[i])
            s.pop();
        int span=s.empty() ? i+1 : i-s.top();
        mySpan.push_back(span);
        s.push(i);
    }
}

int main() { 
    int arr[]={18,12,13,14,11,16};
    int n=6;
    vector<int> mySpan;
    printSpan(arr,n,mySpan);

    for(auto i:mySpan) cout<<i<<" ";
    return 0; 
}

// NAIVE APPROACH TIME COMPLEXITY O(N^2))
// #include <bits/stdc++.h>
// using namespace std;

// void printSpan(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int span = 1;
//         for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
//             span++;
//         cout << span << " ";
//     }
// }

// int main()
// {
//     int arr[] = {18, 12, 13, 14, 11, 16};
//     int n = 6;
//     printSpan(arr, n);
//     return 0;
// }
