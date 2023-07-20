#include <iostream>
#include <limits.h>
using namespace std;

int isSubsetSum(int arr[], int n, int sum){
    if (n == 0)
        return sum == 0 ? 1 : 0;

    return isSubsetSum(arr, n - 1, sum) + isSubsetSum(arr, n - 1, sum - arr[n - 1]);
}

int main(){
    int n = 3, arr[] = {10, 20, 15}, sum = 25;
    cout << isSubsetSum(arr, n, sum);

    return 0;
}
