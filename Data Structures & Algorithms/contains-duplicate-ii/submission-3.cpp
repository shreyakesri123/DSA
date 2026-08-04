class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         unordered_map<int,int>mp;
         for(auto int i=0;i<nums.size();i++)
         {
            if(mp.find(nums[i])!=mp.end() && i!=mp[nums[i]] && abs(i-mp[nums[i]])<=k) return true;
            mp[nums[i]]=i;
         }

         return false;

    }
};