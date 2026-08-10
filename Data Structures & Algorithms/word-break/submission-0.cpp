class Solution {
public:
    bool wordBreak(string s, vector<string>&ans) {
         
          int n= s.size();
          unordered_set<string>set(ans.begin(),ans.end());

          vector<bool>dp(n+1,0);

          dp[0]=1;

          for(int i=1;i<=n;i++)
          {
            for(int j=0;j<i;j++)
            {
               if(dp[j] && set.find(s.substr(j,i-j))!=set.end())//means can be segmented and can be found in set
               {
                dp[i]=1;
                break;
               }
            }
          }
          return dp[n];
    }
};