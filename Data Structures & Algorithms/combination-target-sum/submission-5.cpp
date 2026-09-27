class Solution {
public:
vector<vector<int>>ans;
void f(int ind,int &sum,int target,vector<int>&hello,vector<int>&nums)
{
    if(ind>=nums.size())
    {
        if(sum==target)
        {
            ans.push_back(hello);
        }
         return ;
    }

    if(sum+nums[ind]<=target)
    {
        sum+=nums[ind];
        hello.push_back(nums[ind]);
        f(ind,sum,target,hello,nums);
        sum-=nums[ind];
        hello.pop_back();
    }

    f(ind+1,sum,target,hello,nums);
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>hello;
        int sum =0;
        f(0,sum,target,hello,nums);
        return ans;
    }
};
