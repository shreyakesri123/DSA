class Solution {
public:
  bool issum(vector<int>arr, int sum){
    
        int n=arr.size();
        bool dp[n+1][sum+1];
        
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
                if(arr[i-1]<=j)
                {
                    dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else dp[i][j]= dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
          
          int sum=accumulate(nums.begin(),nums.end(),0);
          if(sum%2!=0) return 0;

          else return issum(nums,sum/2);
    }
};