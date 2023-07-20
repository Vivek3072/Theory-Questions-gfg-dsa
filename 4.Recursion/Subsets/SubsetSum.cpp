#include <iostream>
#include <vector>
using namespace std;
// Generate all subsets or subsequences for a string

void subsetSum(vector<int> &nums,vector<int> &curr,int i){
    if(i == nums.size()){ 
        int sum =0;
        for (int num : curr)
            sum += num;
        cout << sum<<endl;
        return;
    }
    subsetSum(nums,curr,i+1);
    curr.push_back(nums[i]);
    subsetSum(nums,curr,i+1);
    curr.pop_back();
}

int main(){
    vector<int> nums = {10,20,15};
    vector<int> curr;
    cout<<"\nAll subsets/subsequences are :"<<endl;
    subsetSum(nums,curr,0);
    cout<<"\n";
    return 0;
}
