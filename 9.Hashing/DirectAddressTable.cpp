#include<iostream>
using namespace std;

// Direct Address Table 
bool table[1000]={false};

void Insert(int val){
    table[val]=true;
}

void Delete(int val){
    table[val]=false;
}

bool Search( int val){
    if(table[val]==true) return true;
    else return false;
}

int main(){
    Insert(10);
    Insert(20);
    Insert(119);
    cout<<"Search result :"<<Search(10)<<endl;
    cout<<"Search result :"<<Search(20)<<endl;
    Delete(119);
    cout<<"Search result :"<<Search(119)<<endl;
    return 0;
}
