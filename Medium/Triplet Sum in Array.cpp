//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X) {
    std::sort(A, A + n);
    for (int i = 0; i < n; i++) {
        int a = X - A[i];
        int left = i + 1; // Start from the next element
        int right = n - 1;
        while (left < right) {
            int sum = A[left] + A[right];
            if (a == sum) {
                return 1; 
            } else if (a > sum) {
                left++;
            } else {
                right--;
            }
        }
    }
    return 0; 
}

// 1 4 6 8 10 45
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends
