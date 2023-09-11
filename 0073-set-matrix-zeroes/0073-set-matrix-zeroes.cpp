class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
    int n=nums.size();
    int m=nums[0].size();   
    vector<vector<int>> arr( n , vector<int> (m, 0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			arr[i][j]=nums[i][j];
            cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(nums[i][j]==0)
			{
				for(int k=0;k<n;k++)
				{
					arr[k][j]=0;
				}
				for(int l=0;l<m;l++)
				{
					arr[i][l]=0;
				}
			}
		}
	}  
   for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			nums[i][j]=arr[i][j];
		}
	}
    }
};