#include <iostream>
#include <string>
using namespace std;

// TIME COMPLEXITY IS O(n^3)
int longPropPreSuff(string str, int n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++)
            if(str[i]!=str[n-len+i])
                flag=false;
                
        if(flag==true)
            return len;
    }
    return 0;
}

void generateLPS(string str, int lps[]){
    for(int i = 0; i<str.size(); i++)
        lps[i] = longPropPreSuff(str,i+1);
}

int main(){
    string str = "abab";
    int lps[str.size()];

    generateLPS(str,lps);
    for(auto i:lps) cout<<i<<" ";
    return 0;
}
 