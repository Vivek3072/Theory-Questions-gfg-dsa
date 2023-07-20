#include<bits/stdc++.h>
using namespace std;

void generatePermut(string str, int i){
    if(i == str.size() - 1){
        cout<<str<<" ";
        return;
    }

    for(int j=i; j<str.size() ; j++){
        swap(str[i],str[j]);
        generatePermut(str,i+1);
        swap(str[i],str[j]);
    }
}

int main(){
    generatePermut("abcd",0);
    return 0;
}
 