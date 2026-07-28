class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int j=0, i=0;
        while(i<nums.size())
        {
            if(nums[i]!=val)
            {
                nums[j++]=nums[i];
            }
            i++;
        }

       return j;
    }
};