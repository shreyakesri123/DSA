class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int i=0,j=0;
        int sum=0;
        int l=INT_MAX;
        while(j<nums.size())
        {
            sum+=nums[j];
            while(sum>=target)
            {
                if(j-i+1< l)
                {
                    l= j-i+1;
                }
                sum-=nums[i++];
            }
            j++;
        }  
        return l==INT_MAX? 0:l;
    }
};