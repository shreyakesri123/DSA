class Solution {
public:
int f(int i,int j, vector<vector<int>>&dp,vector<vector<int>>&nums)
{
    int n = nums.size(), m= nums[0].size(),maxi=1;

   if(dp[i][j]!=-1) return dp[i][j];

   int r[]={-1,0,1,0};
   int c[]={0,-1,0,1};

   for(int k=0;k<4;k++)
   {
    int nr= r[k]+i ,nc= c[k]+j;
    if(nr>=0 && nr<n && nc>=0 && nc<m && nums[nr][nc]>nums[i][j])
    {
        maxi =max(maxi, 1+ f(nr,nc,dp,nums));
    }
   }
   return dp[i][j]=maxi;
}



    int longestIncreasingPath(vector<vector<int>>& nums) {
        
        int n = nums.size(), m= nums[0].size(),maxi=0;

        vector<vector<int>>dp(n,vector<int>(m,-1));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(dp[i][j]==-1)
                {
                    maxi= max(maxi,f(i,j,dp,nums));
                }
            }
        }

        return maxi;
        
    }
};
