//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N){
        // Convert the array to a vector
        vector<int> nums(arr, arr + N);

        sort(nums.begin(), nums.end());

        int count = 1, max_count = 1;
        for(int i = 1; i < N; i++){
            if(nums[i] == nums[i-1] + 1){
                count++;
            }
            else if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                count = 1;
            }
            if(count > max_count){
                max_count = count;
            }
        }
        return max_count;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends
