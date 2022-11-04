// FINDING GCD OR HCF
#include<iostream>
using namespace std;
int gcd(int,int);

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    int y=gcd(a,b);
    cout<<"The GCD is = "<<y<<endl;
    return 0;
}

int gcd(int a,int b){
    int m = min(a,b);
    if((a>b?a:b)%m==0) return m;

    for(int i=m/2 ; i>=1 ; i--){
        if(m%i==0 && (a>b?a:b)%i==0) return i; 
    }
    return 1;

    //TIME COMPLEXITY = O(min(a,b))
    

    // int res=min(a,b);
    // while(res>0){
    //     if(a%res==0 && b%res==0) break;
    // res--;
    // }
    //     return res;
}



// // FINDING GCD OR HCF
// #include<iostream>
// using namespace std;
// int gcd(int,int);

// int main(){
//     int a,b;
//     cout<<"Enter two numbers: ";
//     cin>>a>>b;
    
//     int y=gcd(a,b);
//     cout<<"The GCD is = "<<y<<endl;
//     return 0;
// }

// int gcd(int a,int b){
//     int m = a>b?b:a;
//     if((a>b?a:b)%m==0) return m;

//     for(int i=m/2 ; i>=1 ; i--){
//         if(m%i==0 && (a>b?a:b)%i==0) return i; 
//     }
//     return 1;
// }

