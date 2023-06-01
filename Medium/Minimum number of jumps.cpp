//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int position = 0;
        int count = 0;
        int destination = 0;
        
       for(int i=0;i<n-1; i++){
           if(i==position && arr[position]==0 && position==destination){
               return -1;
           }
           destination = max(destination, i + arr[i]);
           if(position == i){
               position = destination;
               count++;
           }
       }
       return count;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
