class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& nums) {
        // distance of nearest zero 
          int n = nums.size(), m=nums[0].size();
          queue<pair<int,pair<int,int>>>q;
          vector<vector<bool>>vis(n,vector<bool>(m,0));

          vector<vector<int>>ans(n,vector<int>(m,INT_MAX));

          
          for(int i=0;i<n;i++)
          {
            for(int j=0;j<m;j++)
            {
                if(nums[i][j]==0) 
                {
                    q.push({0,{i,j}});
                    vis[i][j]=1;
                }
                else if(nums[i][j]==-1) ans[i][j]=-1;
            }
          }
          
          int r[]={-1,0,1,0};
          int c[]={0,1,0,-1};


          while(!q.empty())
          {
             int dis= q.front().first;
             int a= q.front().second.first;
             int b= q.front().second.second;
             ans[a][b]=dis;
             q.pop();

             for(int i=0;i<4;i++)
             {
                int nr= a+r[i] , nc= b+c[i];
                if(nr>=0&&nc>=0 && nr<n && nc<m && !vis[nr][nc] && nums[nr][nc]!=-1)
                {
                    q.push({dis+1,{nr,nc}});
                    vis[nr][nc]=1;
                }
             }
          }
          
          nums=ans;
    }
};
