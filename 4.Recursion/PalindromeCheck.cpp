#include <iostream>
#include <string>
using namespace std;

// Theta(n) - Time and Space complexities in worst case 
bool isPalindrome(string s,int low, int high){
    if(low >= high)
        return true;
    return (s[low] == s[high]) && isPalindrome(s, low+1, high-1);
}

int main(){
    string s = "abbcbba";
    int n = s.size();
    if(isPalindrome(s,0,n-1))
        cout<<"The string is Palindrime.";
    else 
        cout<<"The string is not Palindrime.";
    return 0;
}
