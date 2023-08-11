#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void getWindow(vector<int> nums, vector<int> &ans, int k){
        int n = nums.size();
        deque<int> dq; 
        for(int i = 0; i < n ; i++){
            while(!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            
            while(!dq.empty() && nums[dq.back()] <= nums[i])
                dq.pop_back();
            
            dq.push_back(i);
            
            if(i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }
    }

};

int main(){
    vector<int> nums{1,3,4,5,6,7};
    vector<int> ans;
    Solution soln;
    soln.getWindow(nums,ans,3);
    for(auto i:ans) cout<<i<<" ";
    return 0;
}