class Solution {
public:
int f(int i,int n,vector<int>&nums, vector<int>&dp)
{
    if(i>=n) return 0;
    if(i==n-1) return nums[n-1];
    if(dp[i]!=-1) return dp[i];

    int a= f(i+1,n,nums,dp);
    int b= f(i+2,n,nums,dp);
    
    return dp[i]= nums[i]+min(a,b);

}
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n,-1);

        return  min(f(0,n,cost,dp),f(1,n,cost,dp));
    }
};
