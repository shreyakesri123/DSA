class Solution {
public:
vector<vector<int>>ans;
void f(int ind,vector<int>&hello,vector<int>&nums)
{
    if(ind>=nums.size())
    {
        ans.push_back(hello);
        return ;
    }

    hello.push_back(nums[ind]);
    f(ind+1,hello,nums);
    hello.pop_back();

    f(ind+1,hello,nums);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>hello;
        f(0,hello,nums);
        return ans;
    }
};
