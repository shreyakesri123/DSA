class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
         
         int n = nums.size();
            vector<int>ans(n,0);
            stack<int>s;

          for(int i=n-1;i>=0;i--)
          {
             while(!s.empty() && nums[i]>=nums[s.top()])s.pop();

             if(!s.empty())
             {
                ans[i]= s.top();
             }
             s.push(i);
          }  

          for(int i=0;i<n;i++)
          {
            if(ans[i]!=0)
            {
                ans[i]= ans[i]-i;
            }
          }
          return ans;
    }
};
