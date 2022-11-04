// #include<bits/stdc++.h>

// using namespace std;

// /*
//  * Complete the 'minimumKeypadClickCount' function below.
//  *
//  * The function is expected to return an INTEGER.
//  * The function accepts STRING text as parameter.
//  */

// int minimumKeypadClickCount(string text) {
//     int count=0;
//     int n=text.length();
//     char c[n+1];
//     strcpy(c, text.c_str());
//     // for(int i=0;i<n;i++) cout<<c[i]<<" ";
    
//     char alphabets1[10]={'a' ,'b' ,'c' ,'d' ,'h' ,'g', 'e' , 'f' , 'i' };
//       char alphabets2[10]={'j' ,'o' ,'p' ,'k' ,'m' ,'l', 'n' , 'q' , 'r' };
//             char alphabets3[9]={'s' ,'t' ,'u' ,'v' ,'z' ,'w', 'x' , 'y' };

//     for(int i=0;i<26;i++){
//         if(  c[i] ==  alphabets1[i] ){
//             count++;
//         }
        
//         else if(   c[i] == alphabets2[i] ){
//             count=count+2;
//         }
//         else if( c[i] == alphabets3[i]  ){
//             count=count+3;
//         }
//     }
//     return count;
// }

// int main()
// {
//     ofstream fout(getenv("OUTPUT_PATH"));

//     string text;
//     getline(cin, text);

//     int result = minimumKeypadClickCount(text);

//     fout << result << "\n";

//     fout.close();

//     return 0;
// }

#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int n; cin>>n;
    int nums[n];
    for(int i=0;i<n;i++) cin>>nums[i];
    int target;
    cin>>target;
      srand(time(0));  // Initialize random number generator.

    for(int i=0;i<n;i++){
        if(nums[rand() % i]+nums[(rand() % i)+1]==target){
            cout<<i<<i+2<<endl;
        }
    }    
}
