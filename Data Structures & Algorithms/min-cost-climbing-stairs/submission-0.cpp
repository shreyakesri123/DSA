class Solution {
public:
int f(int i,int n,vector<int>&nums, vector<int>&dp)
{
    if(i>n) return INT_MAX;
    if(i==n) return 0;
    
    if(dp[i]!=INT_MAX) return dp[i];

    int a= f(i+1,n,nums,dp);
    int b= f(i+2,n,nums,dp);

    return dp[i] = nums[i]+min(a,b);
}
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        vector<int>dp(n,INT_MAX);
        vector<int>sp(n,INT_MAX);

       int a=  f(0,n,cost,dp) ;
       int b=  f(1,n,cost,sp);
       return min(a,b);
       
    }
};
