class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int k) {
         
         map<int,int>mp;
         sort(nums.begin(),nums.end());

         if(nums.size()<k) return false;

         for(auto it:nums)mp[it]++;

         for(auto it:nums)
         {
            if(mp[it]==0) continue;
            if(mp.find(it)!=mp.end())
            {
                for(int i=it;i<it+k;i++)
                {
                    if(mp[i]==0) return false;
                    mp[i]--;
                }
            }
            
         }

         return true;
         
    }
};
