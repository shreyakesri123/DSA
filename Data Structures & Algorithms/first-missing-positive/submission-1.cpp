class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int a=*max_element(nums.begin(),nums.end()), b=-1;

        unordered_set<int>s;
        for(auto it:nums) s.insert(it);

        for(int i=1;i<=a;i++)
        {
            if(s.find(i)==s.end()) {b=i; break; }
        }
        if(b!=-1) return max(1,b);
        else return max(1,a+1);
    }
};