class Solution {
public:
bool f(int mid, vector<int>&nums, int h)
{
    int count =0;
    for(int i=0;i<nums.size();i++)
    {
        count+= ceil(nums[i]/double(mid) );
    }
    return count<=h;
}
    int minEatingSpeed(vector<int>& nums, int h) {
         
         int n = nums.size();
         int a= *max_element(nums.begin(),nums.end());

         int s=1,e=a;
         int ans=-1;
         while(s<=e)
         {
            int mid = s+(e-s)/2;
            if(f(mid,nums,h))
            {
                ans = mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
         }
         return ans;
    }
};
