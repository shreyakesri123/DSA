class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int count =0,sum=0;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
            {
                count+= mp[sum-k];
            }
            if(sum==k) count++;
            mp[sum]++;
        }
        return count;
    }
};