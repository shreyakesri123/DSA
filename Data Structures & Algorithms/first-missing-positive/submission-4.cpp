class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int ans= *max_element(nums.begin(),nums.end());
        
        if(ans<=0) return 1;

        unordered_set<int>s;
        for(auto it:nums) if(it>0) s.insert(it);

        for(int i=1;i<=ans;i++)
        {
           if(s.find(i)==s.end()) return i;
        }

        return ans+1;
        
        
    }
};