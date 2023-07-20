#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int> &nums, vector<int> &curr, int index){
    if (index == nums.size()){
        // Print the current subset
        for (int num : curr)
            cout << num << " ";
        cout << endl;
        return;
    }

    // Exclude the current number
    generateSubsets(nums, curr, index + 1);
    // Include the current number
    curr.push_back(nums[index]);
    generateSubsets(nums, curr, index + 1);

    // Backtrack
    curr.pop_back();
}

int main(){
    vector<int> nums = {1, 2, 2};

    cout << "All subsets are:" << endl;
    vector<int> curr;
    generateSubsets(nums, curr, 0);

    return 0;
}
 