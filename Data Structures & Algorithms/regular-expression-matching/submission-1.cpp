class Solution {
public:
    bool isMatch(string a, string b) {
          
          int n =a.size();
          int m =b.size();
         

          vector<vector<int>>dp(n+1,vector<int>(m+1,0));

          dp[0][0]=1;

          for(int j=1;j<=m;j++)
          {
            if(b[j-1]=='*')
            dp[0][j]=dp[0][j-2];
          }

          for(int i=1;i<=n;i++)
          {
            for(int j=1;j<=m;j++)
            {
                if(a[i-1]==b[j-1] || b[j-1]=='.')
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else if(b[j-1]=='*')
                {
                    dp[i][j]= dp[i][j-2];

                    if(a[i-1]==b[j-2] || b[j-2]=='.')
                    {
                        dp[i][j]= dp[i][j] || dp[i-1][j];
                    }
                }
            }
          }

          return dp[n][m];

    }
};
