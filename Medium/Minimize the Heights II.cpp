//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int minDiff = arr[n-1] - arr[0];
        
        int min_height = arr[0] + k;
        int max_height = arr[n-1] - k;
        
        int curr_min, curr_max;
        
        for(int i=0; i< n-1; i++){
            curr_min = min(arr[i+1]-k, min_height);
            curr_max = max(arr[i]+k, max_height);
            
            if(curr_min < 0){
                continue;
            }
            else{
                minDiff = min(minDiff, curr_max - curr_min);
            }
        }
        return minDiff;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
