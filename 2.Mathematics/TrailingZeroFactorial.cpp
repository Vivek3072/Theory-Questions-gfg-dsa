// FINDING NUMBER OF TRAILING ZEROES
#include<iostream>
#include<math.h>
using namespace std;
int trail(int);

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    int count=trail(n);
    cout<<"The nmber of trailing zeroes is = "<<count<<endl;
    return 0;
}

int trail(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5) res=res+n/i;
    return res;
}



// // FINDING NUMBER OF TRAILING ZEROES GENERAL METHOD
// #include<iostream>
// using namespace std;
// long long int fact(int);

// int main(){
//     int n,count=0;
//     cout<<"Enter number: ";
//     cin>>n;  
//     long long int y=fact(n);
//     cout<<y<<" is y\n";
//     for(int i=0;y>0 ;i++,y/=10){
//      int r=y%10;
//      if(r==0) count++;
//      else break;
//     }
//     cout<<"The nmber of trailing zeroes is = "<<count<<endl;
//     return 0;
// }

// long long int fact(int n){
//     if(n==0) return 1;
//     return n*fact(n-1);
// }






// // FINDING NUMBER OF TRAILING ZEROES
// #include<iostream>
// #include<math.h>
// using namespace std;
// int trail(int);

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
    
//     int count=trail(n);
//     cout<<"The nmber of trailing zeroes is = "<<count<<endl;
//     return 0;
// }

// int trail(int n){
//     int trailCount=0;
//     for(int i=1;i<=n;i=i*5) trailCount += floor(n/5*i);
//     return trailCount;
// }







// iostream>
// #include<math.h>
// using namespace std;
// int trail(int);

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
    
//     int count=trail(n);
//     cout<<"The nmber of trailing zeroes is = "<<count<<endl;
//     return 0;
// }

// int trail(int n){
//     int trailCount=0;
//     for(int i=1;i<=n;i=i*5) trailCount += floor(n/5*i);
//     return trailCount;
// }
