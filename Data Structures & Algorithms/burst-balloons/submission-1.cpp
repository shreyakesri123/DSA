class Solution {
public:
int f(int i,int j, vector<vector<int>>&dp, vector<int>&nums)
{
    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int maxi=0;

    for(int k=i;k<=j;k++)
    {
        maxi= max( maxi, f(i,k-1,dp,nums)+f(k+1,j,dp,nums)+nums[k]*nums[i-1]*nums[j+1]);
    }
    return dp[i][j]= maxi;
}
    int maxCoins(vector<int>& nums) {
        
        int n = nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);

        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return f(1,n,dp,nums);
    }
};
