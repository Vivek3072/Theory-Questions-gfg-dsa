#include<iostream>
using namespace std;
// pow(x,n)

int computingPower(int,int);

int main(){
    int x,n;
    cin>>x>>n;
    int y= computingPower(x,n);
    cout<<y*y<<endl;
}


int computingPower(int x , int n){
  int res=1;
 if(n>0) res = res * computingPower(x,n/2);

    return res;
}

// for(int i=1 ; i<=n/2 ; i++  ){
//     res=res*x;
// }
