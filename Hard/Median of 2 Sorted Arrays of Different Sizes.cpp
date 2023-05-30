//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> v(m+n,0);
     
        int i=0;
        int j=0;
        int k=0;
        
        
        while(i<m && j<n){
            if (nums1[i] < nums2[j]){
                v[k] = nums1[i];
                i++;
            }
            else{
                v[k] = nums2[j];
                j++;
            }
            k++;
        }
        
        while(i<m){
            v[k] = nums1[i];
            k++; i++;
        }
        while(j<n){
            v[k] = nums2[j];
            k++; j++;
        }
        
        if(v.size()%2==0){
	        double a = nums1[nums1.size()/2];
            double b = nums1[(nums1.size()/2)-1];
	        return (double)((a+b)/2);
	    }
	    else{
	        return v[v.size()/2];
	    }
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends
