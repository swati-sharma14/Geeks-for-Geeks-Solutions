//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i] <= k){
                count++;
            }
        }
        
        int swap = INT_MAX, curr_swap = 0;
        for(int i=0; i<count; i++){
            if(arr[i] > k){
                curr_swap++;
            }
        }
        swap = curr_swap;
        for(int i=count; i<n; i++){
            if(arr[i-count] > k){
                curr_swap -= 1;
            }
            if(arr[i] > k){
                curr_swap += 1;
            }
            swap = min(swap,curr_swap);
        }
        return swap;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends
