class Solution {
public:
vector<vector<int>>ans;
void f(int ind,int &sum,int target,vector<int>&hello,vector<int>&nums)
{
   if(sum==target)
   {
     ans.push_back(hello);
     return ;
   }

   for(int i=ind;i<nums.size();i++)
   {
    if(i>ind && nums[i]==nums[i-1]) continue;
    if(sum+nums[i]>target) break;

    sum+=nums[i];
    hello.push_back(nums[i]);
    f(i+1,sum,target,hello,nums);
    sum-=nums[i];
    hello.pop_back();
   }
}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>hello;
        int sum =0;
        f(0,sum,target,hello,nums);
        return ans;
    }
};
