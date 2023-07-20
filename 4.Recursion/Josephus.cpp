#include <iostream>
#include <vector>
using namespace std;
// Recurence relation = T(n) = T(n-1) + c
// So Tme co plexity is THeta(n)
// In this the indices begion from 0

int josephus(int n, int k){
    if (n == 1)
        return 0;
    return (josephus(n - 1, k) + k) % n;
}

int main(){
    int n = 5, k = 3;
    cout << "The last remaining person is " << josephus(n, k);

    return 0;
}
