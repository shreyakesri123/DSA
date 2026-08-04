class Solution {
public:
    int maxProfit(vector<int>& nums) {
         
         int a=INT_MAX,b=0;
         for(int i=0;i<nums.size();i++)
         {
            a=min(a,nums[i]);
            b=max(b,nums[i]-a);
         }
         return b;
    }
};
