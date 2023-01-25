#include <iostream>
#include <map>  
using namespace std;

int findUnique(int a[] , int n){
    map<int , int> freq;
    for(int i= 0 ; i < n ; i++ )
           freq[a[i]]++;

    int res;
    for(auto i:freq){
        int key = i.first;
        int val = i.second;
        if(val==1) res=key;
    }
    return res;
}
 
int main(){
    int n;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    int result = findUnique(a,n);
    cout<<result;
    return 0;
}
