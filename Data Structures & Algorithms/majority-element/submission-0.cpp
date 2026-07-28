class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int maxi= nums[0];
        int n = nums.size();
        int count =0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==maxi)
            {
                count++;
            }
            else
            {
                count--;
                if(count==0)
                {
                    count=1;
                    maxi=nums[i];
                }
            }
        }
        if(count>n/2) return maxi;
        
    }
};