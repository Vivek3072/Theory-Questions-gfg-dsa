#include<iostream>
#include<algorithm>
using namespace std;

// Sort functions worst and average case performance is n*log(n)
// It uses IntroSort(i.e, Hybrid of Quick sort , Heap Sort and Insertion Sort)

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a , a+n);
    for(auto i:a) cout<<i<<" ";
    cout<<endl;
    sort(a , a+n, greater<int>() );
    for(auto i:a) cout<<i<<" ";
    return 0;
}
 