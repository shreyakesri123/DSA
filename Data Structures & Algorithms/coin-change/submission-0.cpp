class Solution {
public:
    int coinChange(vector<int>& nums, int sum) {
        
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,INT_MAX-1));
        for(int j=0;j<=n;j++)
        {
            dp[j][0]=0;
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j] = min(1+dp[i][j-nums[i-1]] , dp[i-1][j]);
                }
                else
                {
                    dp[i][j]= dp[i-1][j];
                }
            }
        }

        return dp[n][sum]==INT_MAX-1 ? -1 :dp[n][sum];
    }
};
