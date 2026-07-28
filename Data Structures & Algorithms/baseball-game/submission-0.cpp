class Solution {
public:
    int calPoints(vector<string>& nums) {
          stack<int>s;

          for(int i=0;i<nums.size();i++)
          {
            if(nums[i]=="+")
            {
                int a= s.top(); s.pop();
                int b= s.top(); s.pop();
                s.push(b);
                s.push(a);
                s.push(a+b);
            }
            else if(nums[i]=="C")
            {
                s.pop();
            }
            else if(nums[i]=="D")
            {
                int a= s.top();
                s.push(2*a);
            }
             else s.push(stoi(nums[i]));
          }

          int sum=0;
          while(!s.empty())
          {
            sum+=s.top();
            s.pop();
          }
          return sum;

    }
};