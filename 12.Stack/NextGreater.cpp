#include<bits/stdc++.h>
using namespace std;

class NextGreater{
    public:
        void nextElement(vector<int> arr, int n, vector<int>& answer){
            stack<int> greaters;
            answer.push_back(-1);
            greaters.push(arr[n-1]);

            for(int i=n-2 ; i >= 0 ; i--){
                while(greaters.empty() == false && greaters.top() <= arr[i])
                    greaters.pop();
                int nextGreatElement =greaters.empty() ? -1 : greaters.top();
                answer.push_back(nextGreatElement);
                greaters.push(arr[i]);
            }
        }
};

int main(){
    vector<int> arr{20,30,10,5,15};
    int n = arr.size();
    vector<int> answer;
    NextGreater nextGreat;
    nextGreat.nextElement(arr,n,answer);
    reverse(answer.begin(),answer.end());
    for(auto i:answer) cout<<i<<" ";
    return 0;
}
 