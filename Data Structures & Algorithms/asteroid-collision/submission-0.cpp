class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
         stack<int>s;

         for(int i=0;i<nums.size();i++)
         {
            if(s.empty())s.push(nums[i]);
            else  if(nums[i]<0)
            {
                while(!s.empty() && s.top()< abs(nums[i]) && s.top()>0) s.pop();

                if(!s.empty() && s.top()==-1*nums[i]) s.pop();
                else if(!s.empty() && s.top()>0) continue;
                else s.push(nums[i]);
            }
            else
            {
                s.push(nums[i]);
            }
         }
         vector<int>ans;
         while(!s.empty())
         {
            ans.push_back(s.top());
            s.pop();
         }
         reverse(ans.begin(),ans.end());
          return ans;
    }
};