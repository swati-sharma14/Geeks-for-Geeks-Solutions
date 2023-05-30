//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int n){
        // code here
        vector<int>v;
        v.push_back(1);
        
        for(int j=2;j<=n;j++)
        {
            int carry=0;
            
            for(int i=0;i<v.size();i++)
            {
                int data=v[i]*j+carry;
                v[i]=data%10;
                carry=data/10;
            }
            
            while(carry!=0)
            {
                v.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
