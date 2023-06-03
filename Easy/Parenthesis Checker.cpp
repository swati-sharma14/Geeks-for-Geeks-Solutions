//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> stack;
        for(int i=0; i<x.size(); i++){
            if(x[i]=='{' || x[i]=='(' || x[i]=='['){
                stack.push(x[i]);
            }
            else{
                if(stack.size()==0){
                    return false;
                }
                char a = stack.top();
                if(a=='{' && x[i]!='}'){
                    return  false;
                }
                else if(a=='(' && x[i]!=')'){
                    return false;
                }
                else if(a=='[' && x[i]!=']'){
                    return false;
                }
                stack.pop();
            }
        }
        if(stack.size()==0) return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends
