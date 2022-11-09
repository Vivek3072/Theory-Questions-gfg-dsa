#include <bits/stdc++.h>
using namespace std;

void FrequenciesSortedArray(int a[] , int n ){
    
    for(int i=0; i<n ;  ){
        int freq=1,k=i;
         cout<<"First occurence index : "<<i<<", Value= "<<a[i]<<" ,";
        for(int j=i+1 ; j<n ; j++){
            if(a[j]==a[i])
                freq++;
            else{
                i=j;
                break;
            }
        }
        cout<<"It's frequency is: "<<freq<<endl;
        
        if(i==k)
            break;
    }
}
 
int main(){
    int n ;
    cin >> n ;

    int a[n];
    for (int i = 0; i < n ; i++) cin >> a[i];
    FrequenciesSortedArray(a,n);

    return 0;
}
 