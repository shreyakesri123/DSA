class Solution {
public:
    int numSquares(int n) {
         
         int a=1;
         vector<int>ans;

         while(a*a<=n)
         {
           ans.push_back(a*a);
           a++;
         }
         int m = ans.size();
         vector<vector<int>>dp(m+1,vector<int>(n+1,INT_MAX-1));

         for(int i=0;i<=m;i++)
         {
            dp[i][0]=0;
         }

         for(int i=1;i<=m;i++)
         {
            for(int j=0;j<=n;j++)
            {
                if(ans[i-1]<=j)
                {
                    dp[i][j]= min(1+dp[i][j-ans[i-1]] , dp[i-1][j]);
                }
                else
                {
                    dp[i][j]= dp[i-1][j];
                }
            }
         }

         return dp[m][n]==INT_MAX-1 ? -1: dp[m][n];

    }
};