class Solution {
public:
int f(int i,int j, int n,int m , vector<vector<int>>&dp,vector<vector<int>>& nums)
{
    if(i>=n || j>=m || nums[i][j]==1) return 0;
    if(i==n-1 && j==m-1) return 1;
    if(dp[i][j]!=-1) return dp[i][j];

    int a= f(i+1,j,n,m,dp,nums);
    int b= f(i,j+1, n,m,dp,nums);
    return dp[i][j]=a+b;
}
  
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int m = nums.size(), n= nums[0].size();
        if(nums[0][0]==1 || nums[m-1][n-1]==1) return 0;
         vector<vector<int>>dp(m,vector<int>(n,-1));
         return f(0,0,m,n,dp,nums);
    }
};