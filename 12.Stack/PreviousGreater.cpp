#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class PrevGreater{
    public:
        void prevElement(vector<int> arr, int n, vector<int>& answer){
            stack<int> greaters;
            answer.push_back(-1);
            greaters.push(arr[0]);

            for(int i=1 ; i < n ; i++){
                while(greaters.empty() == false && greaters.top() <= arr[i]){
                    greaters.pop();
                }
                int span=greaters.empty() ? -1 : greaters.top();
                answer.push_back(span);
                greaters.push(arr[i]);
            }
        }
};

int main(){
    vector<int> arr{20,30,10,5,15};
    int n = arr.size();
    vector<int> answer;
    PrevGreater prevGreat;
    prevGreat.prevElement(arr,n,answer);
    for(auto i:answer) cout<<i<<" ";
    return 0;
}
 