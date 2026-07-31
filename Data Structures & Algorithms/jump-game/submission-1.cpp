class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size()  , maxi=0;
        for(int i=0;i<n-1;i++)
        {
           maxi= max(maxi, i+nums[i]);
           if(i==maxi) return false;

           if(maxi>=n-1)return true;
        }

        return true;
    }
};
