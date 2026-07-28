class Solution {
public:
vector<int>next(vector<int>&nums)
{
    int n = nums.size();
    vector<int>ans(n,n);

    stack<int>s;
    for(int i=n-1;i>=0;i--)
    {
       while(!s.empty() && nums[i]<=nums[s.top()])s.pop();
       if(!s.empty()) ans[i]=s.top();
       s.push(i);
    }

    return ans;
}

vector<int>prev(vector<int>&nums)
{
    int n = nums.size();
    vector<int>ans(n,-1);

    stack<int>s;
    for(int i=0;i<n;i++)
    {
       while(!s.empty() && nums[i]<nums[s.top()])s.pop();
       if(!s.empty()) ans[i]=s.top();
       s.push(i);
    }
    return ans;
}
    int largestRectangleArea(vector<int>& nums) {
         vector<int>a= next(nums);
         vector<int>b= prev(nums);

         int maxi= 0;
         for(int i=0;i<nums.size();i++)
         {
            int c= a[i]-b[i]-1;
            maxi= max(maxi ,  c*nums[i]);
         }

         return maxi;
    }
};