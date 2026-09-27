class Solution {
public:
bool dfs(int i,int j,int k,vector<vector<bool>>&vis,vector<vector<char>>&nums, string s)
{
    int n = nums.size(), m = nums[0].size();
   
   if(i<0||j<0||i>=n||j>=m||vis[i][j]||k>=s.size()||nums[i][j]!=s[k]) return false;
   if(k==s.size()-1) return true;

   vis[i][j]=1;

   int r[4]={-1,0,1,0};
   int c[4]={0,-1,0,1};

   for(int l=0;l<4;l++)
   {
     int nr= r[l]+i, nc= c[l]+j;
     if(dfs(nr,nc,k+1,vis,nums,s)) return true;
   }

   vis[i][j]=0;
   return false;
}


    bool exist(vector<vector<char>>&nums, string s) {
          
          int n = nums.size(), m = nums[0].size();

          vector<vector<bool>>vis(n,vector<bool>(m,0));

          for(int i=0;i<n;i++)
          {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && nums[i][j]==s[0])
                {
                    if(dfs(i,j,0,vis,nums,s)) return true;
                }
            }
          }

          return false;
    }
};
