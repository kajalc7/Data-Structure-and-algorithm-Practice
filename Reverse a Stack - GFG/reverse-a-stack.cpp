//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void Reverse(stack<int> &s){
        if(s.size()==0 || s.size()==1)
        {
            return;
        }
        int val=s.top();
        s.pop();
        Reverse(s);
        insert(s,val);
    }
    void insert(stack<int>&s,int val)
    {
        if(s.size()==0)
        {
            s.push(val);
            return;
        }
        int temp=s.top();
        s.pop();
        insert(s,val);
        s.push(temp);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends