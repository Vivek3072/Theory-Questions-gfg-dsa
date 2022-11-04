// FINDING NUMBER OF DIGITS IN A NUMBER
#include<iostream>
#include<math.h>
using namespace std;

// LOGARITHMIC APPROACH
int by_Log(int n){
    return floor(log10(n)+1);
}

int main(){
    //number of digits
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int count=by_Log(n);
   
    cout<<"No of digits = "<<count<<endl;
    return 0;
}

// #include<iostream>
// using namespace std;

// int main(){
//     //number of digits
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int count=0;
//     while(n>0){
//         count++;
//         n/=10;
//     }
//     cout<<"No of digits = "<<count<<endl;
//     return 0;
// }



    // RECURSIVE SOLUTION APPROACH 
// #include<iostream>
// using namespace std;

// int recur(int n){
//     if(n==0) return 0;
//     return 1+recur(n/10);
// }

// int main(){
//     //number of digits
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int count=recur(n);
   
//     cout<<"No of digits = "<<count<<endl;
//     return 0;
// }
