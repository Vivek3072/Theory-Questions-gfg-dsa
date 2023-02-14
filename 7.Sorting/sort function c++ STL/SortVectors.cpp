#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v={3,2,45,34,0};

    sort(v.begin() , v.end());
    for(auto i:v) cout<<i<<" ";
    cout<<endl;
    sort(v.begin() , v.end() ,greater<int>());
    for(auto i:v) cout<<i<<" ";
    return 0;
}
 