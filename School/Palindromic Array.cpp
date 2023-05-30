//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include <vector>
class Solution {
public:
    int PalinArray(int arr[], int n)
    {
    	for(int i=0; i<n; i++){
    	    int a = arr[i];
    	    vector<int> num;
    	    while(a!=0){
    	        num.push_back(a%10);
    	        a/=10;
    	    }
    	    int count = 0;
    	    for(int i=0; i<num.size()/2; i++){
    	        if(num[i] != num[num.size()-1-i]){
    	            return 0;
    	        }
    	    }
    	}
    	return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends
