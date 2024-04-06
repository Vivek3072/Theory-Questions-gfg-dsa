#include <iostream>
using namespace std;

// Efficient Solution
int main()
{
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    int left = nums[0];
    int right = 0;
    for (int i = 1; i < n; i++)
        right += nums[i];

    for (int i = 1; i < n; i++)
    {
        right -= nums[i];
        if (left == right)
        {
            cout << "Pivot Index is: " << i << endl;
            return 0;
        }

        left += nums[i];
    }
    cout << -1 << endl;
    return 0;
}

// NAIVE APPROACH
//  #include <iostream>
//  using namespace std;

// int getSum(int arr[], int low, int high)
// {
//     int sum = 0;
//     while (low < high)
//     {
//         sum += arr[low];
//         low++;
//     }
//     return sum;
// }

// int findPivotIndex(int nums[], int n)
// {
//     for (int i = 0; i < n; i++)
//         if (getSum(nums, 0, i) == getSum(nums, i + 1, n))
//             return i;

//     return -1;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     if (n <= 0)
//     {
//         cout << "Invalid input: Array size should be greater than 0." << endl;
//         return 1;
//     }

//     int nums[n];
//     for (int i = 0; i < n; i++)
//         cin >> nums[i];

//     int pivotIndex = findPivotIndex(nums, n);

//     if (pivotIndex != -1)
//         cout << "Pivot Index: " << pivotIndex << endl;
//     else
//         cout << "No pivot index found." << endl;

//     return 0;
// }
