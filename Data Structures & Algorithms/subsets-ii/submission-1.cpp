class Solution {
public:
 vector<vector<int>>ans;
 set<vector<int>>s;
 void f(int ind,vector<int>&hello,vector<int>&nums)
 {
    s.insert(hello);
    for(int i=ind;i<nums.size();i++)
    {
        hello.push_back(nums[i]);
        f(i+1,hello,nums);
        hello.pop_back();
    }
 }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
          
          vector<int>hello;
          sort(nums.begin(),nums.end());
          f(0,hello,nums);
          for(auto it:s){
            ans.push_back(it);
          }
          return ans;

    }
};
