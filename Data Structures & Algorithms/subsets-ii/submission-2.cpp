class Solution {
public:
 vector<vector<int>>ans;
//  set<vector<int>>s;
 void f(int ind,vector<int>&hello,vector<int>&nums)
 {
    ans.push_back(hello);

    for(int i=ind;i<nums.size();i++)
    {
        if(i>ind && nums[i]==nums[i-1]) continue;
        hello.push_back(nums[i]);
        f(i+1,hello,nums);
        hello.pop_back();
    }
 }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          
          vector<int>hello;
          sort(nums.begin(),nums.end());
          f(0,hello,nums);
          
          return ans;

    }
};
