//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long nums1[], long long nums2[], int m, int n) 
        { 
            vector <int> v;
            v.assign((m+n),0);
            if(m==0){
                for(int i=0;i<n;i++){
                    nums1[i] = nums2[i];
                }
                return;
            }
            if(n==0){
                return;
            }
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
            for (int i=0; i<(m); i++){
                nums1[i] = v[i];
            }
            for(int i=0; i<n; i++){
                nums2[i] = v[m+i];
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends
