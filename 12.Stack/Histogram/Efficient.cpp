#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/*
    Initialize res = 0
    2. Find previous smaller element for every element
    3. Find the next smaller element for every element
    4. Do following for every element arr[i]
        curr = arr[i]
        curr += (i-ps[i]-1)*arr
        curr += (ns[i]-i-1)*arr
        res = max(res,curr);
    5. return res
*/

// TTME COMPLEXITY is O(n)
int getMaxArea(int arr[],int n){
        int res=0;
        vector<int> ps(n+1), ns(n+1);

        ps[0] = -1;
        ns[n-1] = n;

        stack<int> st;
        
        //We are finding previous smaller element of every element
        st.push(0);
        for(int i=0 ; i<n ; i++){
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            int span = st.empty() ? -1 : st.top();
            ps[i] = span;
            st.push(i);
        }
        
        // NOW CLEARING THE STACK TO USE IT FOR FINDING THE NEXT SMALLER ELEMENT 
        while(st.empty()==false)
            st.pop();

            
        //We are finding next smaller element of every element
        st.push(n-1);
        for(int i = n-2 ; i >=0 ; i--){
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            int span = st.empty() ? n : st.top();
            ns[i] = span;
            st.push(i);
        }

        for(int i = 0; i<n ; i++){
            int curr = arr[i];

            curr += (i - ps[i] -1) * arr[i];
            curr += (ns[i] - i -1) * arr[i];
            res = max(res, curr);
        }
        return res;
    
}

int main() {
    int arr[]={6,2,5,4,1,5,6};
    int n=7;
    cout<<"Maximum Area: "<<getMaxArea(arr,n);
    return 0; 
}
