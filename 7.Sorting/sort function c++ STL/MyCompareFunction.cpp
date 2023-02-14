#include<iostream>
#include<algorithm>
using namespace std;

struct point
{
    int x,y;
};

bool myCompareFxnX(point p1,point p2){
    return p1.x < p2.x;
}
bool myCompareFxnY(point p1,point p2){
    return p1.y < p2.y;
}
int main(){
    point a[]={{3,10},{2,8},{5,4}};

    sort(a , a+3, myCompareFxnX );
    for(auto i:a) cout<<i.x<<","<<i.y<<" ";

    cout<<endl;

    sort(a , a+3, myCompareFxnY );
    for(auto i:a) cout<<i.x<<","<<i.y<<" ";
    return 0;
}
 