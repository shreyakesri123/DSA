class Solution {
public:
    int maxArea(vector<int>& nums) {
        
       int s=0,e= nums.size()-1;
       int maxi=0;
       while(s<e)
       {
         maxi= max(maxi, min(nums[s],nums[e])*(e-s));
         if(nums[s]<nums[e])s++;
         else e--;
       }
       return maxi;
    }
};
