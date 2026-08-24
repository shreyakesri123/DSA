class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& nums) {
        // distance of nearest zero 

        int n = nums.size(),m= nums[0].size();
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));

        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums[i][j]==0)
                {
                    dis[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int r[]={-1,0,1,0};
        int c[]={0,1,0,-1};

        while(!q.empty())
        {
            int a= q.front().first;
            int b= q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nr= a+r[i] , nc= b+ c[i];
                if(nr>=0&&nc>=0&&nr<n&&nc<m)
                {
                    if(nums[nr][nc]==-1) continue;
                    if(dis[nr][nc]> dis[a][b]+1)
                    {
                        dis[nr][nc]= dis[a][b]+1;
                        q.push({nr,nc});
                    }
                }
            }   
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(nums[i][j]==-1) dis[i][j]=-1;
            }
        }
        nums=dis;
    }
};
