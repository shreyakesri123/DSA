class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>s;
        s.insert(nums.begin(),nums.end());
     return s.size()<nums.size(); 
    }
};