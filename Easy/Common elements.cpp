//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            map<int,int> a_map;
            for(int i=0; i<n1; i++){
                a_map[A[i]] += 1;
            }
            map<int,int> b_map;
            for(int i=0; i<n2; i++){
                b_map[B[i]] += 1;
            }
            vector<int> ans;
            map<int,int> final_ans;
            for(int i=0; i<n3; i++){
                if(a_map[C[i]] > 0 && b_map[C[i]] > 0){
                    final_ans[C[i]] = 1;
                }
            }
            for(auto& x:final_ans){
                ans.push_back(x.first);
            }
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends
