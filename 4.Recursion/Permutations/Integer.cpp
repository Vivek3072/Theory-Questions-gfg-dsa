#include<bits/stdc++.h>
using namespace std;

void generatePermut(vector<int> nums, int i){
    if(i == nums.size() - 1){
        for(auto i:nums)
            cout<<i<<" ";
        cout<<endl;
        return;
    }

    for(int j=i; j<nums.size() ; j++){
        swap(nums[i],nums[j]);
        generatePermut(nums,i+1);
        swap(nums[i],nums[j]);
    }
}

int main(){
    vector<int> nums ={1,2,3};
    generatePermut(nums,0);
    return 0;
}
 