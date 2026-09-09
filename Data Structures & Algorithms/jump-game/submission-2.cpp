class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size()  , maxi=0;

        for(int i=0;i<n;i++)
        {
           maxi= max(maxi, i+nums[i]);
           if(maxi>=n-1)return true;
           
           if(i==maxi) return false;
        }

        return true;
    }
};
