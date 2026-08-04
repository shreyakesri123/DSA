class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         

         unordered_set<int>s;
         int i=0,j=0;

         while(j<nums.size())
         {
            if(s.find(nums[j])==s.end())s.insert(nums[j]);
            else return true;

            while(s.size()>k)
            {
                s.erase(nums[i++]);
            }
            j++;
         }
         return false;

    }
};