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
                int a= it;
                int count =0;
                while(mp.find(a)!=mp.end() && count<k)
                {
                   count++;
                   mp[a]--;
                   a++;
                }
                if(count<k) return false;
            }
            
         }

         return true;
         
    }
};
