class Solution {
public:
int f(int i,int j,int n,int m,vector<vector<int>>&dp,vector<vector<int>>& nums)
{
    if(i>=n||j>=m)return INT_MAX;
    if(i==n-1 && j==m-1) return nums[i][j];
    if(dp[i][j]!=INT_MAX) return dp[i][j];

    int a= f(i+1,j,n,m,dp,nums);
    int b= f(i,j+1,n,m,dp,nums);
    return dp[i][j]= nums[i][j]+min(a,b);
}
    int minPathSum(vector<vector<int>>& nums) {
         
         int n = nums.size(), m=nums[0].size();
         vector<vector<int>>dp(n,vector<int>(m,INT_MAX));
         return f(0,0,n,m,dp,nums);
    }
};