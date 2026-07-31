class Solution {
public:
    int kadane(vector<int>& nums)
    {
        int n=nums.size() , ans=INT_MIN , temp_sum=0;

        for(int i=0;i<n;i++)
        {
            temp_sum+=nums[i];
            ans=max(ans,temp_sum);

            if(temp_sum<0 )temp_sum=0;
        }  
        return ans;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
       int n=nums.size(), sum=accumulate(nums.begin(),nums.end(),0);

        int ans=kadane(nums);

        for(int i=0;i<n;i++) nums[i]*=-1;

        int neg_ans=kadane(nums);

        if(sum+neg_ans==0) return ans;
        else return max(ans,sum+neg_ans);
    }
};