//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    { 
        int zerocount=0;
        int onecount=0;
        int twocount=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                zerocount++;
            }
            
            if(arr[i]==1)
            {
                onecount++;
            }
            else
            {
                twocount++;
            }
        }
        for(int i=0;i<zerocount;i++ )
        {
            arr[i]=0;
        }
        for(int i=zerocount;i<zerocount+onecount;i++)
        {
            arr[i]=1;
        }
        for(int i= zerocount + onecount;i<n;i++)
        {
            arr[i]=2;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends