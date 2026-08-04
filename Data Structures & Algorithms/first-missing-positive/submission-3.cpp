class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int ans= *max_element(nums.begin(),nums.end());
        int a= ans <= 0 ? 1:ans , b=-1;

        unordered_set<int>s;
        for(auto it:nums) if(it>0) s.insert(it);

        for(int i=1;i<=a;i++)
        {
            if(s.find(i)==s.end()) {b=i; break; }
        }
        
        return b==-1 ? a+1:b;
    }
};