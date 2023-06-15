#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &nums, int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    vector<int> LNums(n1);
    vector<int> RNums(n2);

    for (int i = 0; i < n1; ++i)
        LNums[i] = nums[low + i];
    for (int j = 0; j < n2; ++j)
        RNums[j] = nums[mid + 1 + j];

    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (LNums[i] <= RNums[j])
            nums[k++] = LNums[i++];
        else
            nums[k++] = RNums[j++];
    }

    while (i < n1)
        nums[k++] = LNums[i++];

    while (j < n2)
        nums[k++] = RNums[j++];
}

void MergeSort(vector<int> &nums, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;
        MergeSort(nums, low, mid);
        MergeSort(nums, mid + 1, high);
        Merge(nums, low, mid, high);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    MergeSort(nums, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";
    return 0;
}
