class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            int N=nums[i];
            while(N>0)
            {
                N=N/10;
                count++;
            }
            cout<<count;
            if(count%2==0)
            {
                ans++;
            }
        }
        return ans;
        
    }
};