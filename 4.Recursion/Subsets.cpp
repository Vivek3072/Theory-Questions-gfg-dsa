#include <iostream>
#include <string>
using namespace std;
// Generate all subsets or subsequences for a string

void generateSubsets(string s,string curr,int i){
    if(i == s.length()){ 
        cout<<curr<<" ";
        return;
    }
    generateSubsets(s,curr,i+1);
    generateSubsets(s,curr+s[i],i+1);
}

int main(){
    string s ="abc";
    cout<<"\nAll subsets/subsequences are :"<<endl;
    generateSubsets(s,"",0);
    cout<<"\n";
    return 0;
}
