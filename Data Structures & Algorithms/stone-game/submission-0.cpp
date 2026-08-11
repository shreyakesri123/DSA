class Solution {
public:
    bool stoneGame(vector<int>& nums) {
        
        int n = nums.size();
        int a=0,b=0;
        int i=0,j=n-1;
        
        while(i<j)
        {
            if(nums[i]>nums[j])
            {
                a+=nums[i];
                b+=nums[j];
            }
            else
            {
                a+=nums[j];
                b+=nums[i];
            }
            i++;j--;
        }

        return a>b;
    }
};