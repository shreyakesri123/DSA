class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& nums, vector<int>& ans) {
        
        bool a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            int x= nums[i][0], y= nums[i][1] , z= nums[i][2];
             a|=(ans[0]==x && y<=ans[1] && z<=ans[2]) ;
           b|=  (ans[1]==y && x<=ans[0] && z<=ans[2]) ;
           c|= (ans[2]==z && x<=ans[0] && y<=ans[1]) ;
            if(a&&b&&c) return true;
        }
        return false;
    }
};
