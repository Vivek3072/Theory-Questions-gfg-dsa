#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    bool matching(char a, char b){
        return ((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));
    }
    bool isValid(string s) {
        stack<char> stk;

        for(int i=0; i<s.size() ; i++){
            if(s[i]=='(' || s[i]=='{' || s[i] == '[' )
                stk.push(s[i]);
            else{
                if(stk.empty()) return false;
                else if(!matching(stk.top(), s[i])) return false;
                else stk.pop();
            }
        }
        return stk.empty(); //for handling extra open brackets
    }
};

int main() {
    Solution solution; 
    string input;
    cout<<"Enter a string: ";
    cin>>input;  
    
    bool isValid = solution.isValid(input); 
    
    if (isValid) 
        cout << "The string is valid." << endl;
    else 
        cout << "The string is not valid." << endl;
    
    return 0;
}