//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        vector<int> left_max(n,0);
        vector<int> right_max(n,0);
        left_max[0] = 0;
        right_max[n-1] = 0;
        for(int i=1; i<n; i++){
            if(left_max[i-1] > arr[i-1]){
                left_max[i] = left_max[i-1];
            }
            else{
                left_max[i] = arr[i-1];
            }
        }
        for(int i=n-2; i>=0; i--){
            if(right_max[i+1] > arr[i+1]){
                right_max[i] = right_max[i+1];
            }
            else{
                right_max[i] = arr[i+1];
            }
        }
        long long total = 0;
        for(int i=0; i<n; i++){
            if(arr[i] < left_max[i] && arr[i] < right_max[i]){
                int b = min(left_max[i], right_max[i]);
                total += (b - arr[i]);
            }
        }
        return total;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
