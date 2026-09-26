class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         
        int count =0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]=i;
            }
            else
            {
                if(i-mp[nums[i]]<=k)
                {
                  count++;
                }
                mp[nums[i]]=i;
            }
        }

        
       return count>0;
    }
};