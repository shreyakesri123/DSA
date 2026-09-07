class Solution {
public:
bool f(int mid, vector<int>&nums, int d){
    int sum=0;
    int count =1;
    for(int i=0;i<nums.size();i++)
    {
        if(sum+nums[i]<=mid)
        {
            sum+=nums[i];
        }
        else
        {
            count++;
            if(nums[i]>mid || count>d) return false;
            sum=nums[i];
        }
    }
    return count<=d;
}
    int shipWithinDays(vector<int>& nums, int days) {

        // sort(nums.begin(),nums.end());
        
        int sum = accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        int s=1,e= sum;
        while(s<=e)
        {
            int mid= s+(e-s)/2;
            if(f(mid,nums,days))
            {
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
    }
};