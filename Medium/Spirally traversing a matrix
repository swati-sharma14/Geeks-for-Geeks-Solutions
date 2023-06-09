//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int rows = matrix.size();
        if (rows == 0) return ans;
        int cols = matrix[0].size();

        int total = rows * cols;
        int cnt = 0;
        
        int startRow = 0;
        int startCol = 0;
        int endRow = rows - 1;
        int endCol = cols - 1;

        while (cnt < total) {
            // Traverse top row
            for (int col = startCol; col <= endCol && cnt < total; col++) {
                ans.push_back(matrix[startRow][col]);
                cnt++;
            }
            startRow++;

            // Traverse right column
            for (int row = startRow; row <= endRow && cnt < total; row++) {
                ans.push_back(matrix[row][endCol]);
                cnt++;
            }
            endCol--;

            // Traverse bottom row
            for (int col = endCol; col >= startCol && cnt < total; col--) {
                ans.push_back(matrix[endRow][col]);
                cnt++;
            }
            endRow--;

            // Traverse left column
            for (int row = endRow; row >= startRow && cnt < total; row--) {
                ans.push_back(matrix[row][startCol]);
                cnt++;
            }
            startCol++;
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
