class Solution {
public:
void dfs(int a,int b,vector<vector<bool>>&vis,  vector<vector<int>>&nums)
{
    int n = nums.size(), m= nums[0].size();
    vis[a][b]=1;
    int r[]={-1,0,1,0};
    int c[]={0,1,0,-1};

    for(int i=0;i<4;i++)
    {
        int nr= a+r[i] , nc= b+c[i];
        if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && nums[nr][nc]>=nums[a][b])
        {
           dfs(nr,nc,vis,nums);
        }
    }
}
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& nums) {
        
        int n = nums.size(), m= nums[0].size();
        vector<vector<bool>>a(n,vector<bool>(m,0));
       vector<vector<bool>>b(n,vector<bool>(m,0));
        
        for(int j=0;j<m;j++)
        {
            dfs(0,j,a,nums);
            dfs(n-1,j,b,nums);
        }

        for(int i=0;i<n;i++)
        {
            dfs(i,0,a,nums);
            dfs(i,m-1,b,nums);
        }

         vector<vector<int>>ans;

        for(int i=0;i<n;i++)
          for(int j=0;j<m;j++)
           if(a[i][j] && b[i][j]) ans.push_back({i,j});

           return ans;
    }
};
