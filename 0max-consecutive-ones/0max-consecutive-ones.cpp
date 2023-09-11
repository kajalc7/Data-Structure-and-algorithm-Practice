class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
      
        int maxans=0;
        int ans=0;
        for (int i=0;i<nums.size();i++)
        {
            if (nums[i]==1);
            {
                ans++;
            }
            if(nums[i]==0)
            {
               
                ans=0;
            }
          if(maxans<ans) maxans = ans;
        }
        return maxans;
        
    }
};