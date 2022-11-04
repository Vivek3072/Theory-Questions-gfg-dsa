
#include<iostream>
#include<vector>
// Time complexity is O(n)

using namespace std;

int linearSearch(int a[],int n,int x){
    for(int i=0;i<n ; i++)    if(a[i]==x) return i;
return -1;

}

int main(){
int n,x;
cin>>n>>x;

int a[n];
for(int i=0;i<n ; i++)    cin>>a[i];
int y=linearSearch(a,n,x);
cout<<y<<endl;

return 0;
}
