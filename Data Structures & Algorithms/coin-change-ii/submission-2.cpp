class Solution {
public:
    int change(int sum, vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,0));

        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(i==0) dp[i][j]=0;
                if(j==0) dp[i][j]=1;
            }
        }
        
         for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]= dp[i][j-nums[i-1]] + dp[i-1][j];
                }
                else dp[i][j]= dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
};
