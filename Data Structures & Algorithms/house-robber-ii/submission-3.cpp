class Solution {
public:
int f(int i,int j, vector<int>&nums)
{
        int n = j-i+1;
        if(n==1) return nums[i];
        vector<int>dp(n);
        dp[0]=nums[i];
        if(n>1) dp[1]=max(nums[i],nums[i+1]);

        for(int k=2;k<n;k++)
        {
            dp[k]= max(dp[k-1] ,nums[i+k]+dp[k-2]);
        } 
        return dp[n-1];
}
    int rob(vector<int>& nums) {
         
        int n = nums.size();
        if(n<=1) return nums[0];
        return max(f(0,n-2,nums), f(1,n-1,nums));
    }
};
