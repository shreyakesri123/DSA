class Solution {
public:
    bool isValid(string nums) {
         stack<char>s;

         for(int i=0;i<nums.size();i++)
         {
            if(nums[i]=='(' || nums[i]=='{' || nums[i]=='[')
            {
                s.push(nums[i]);
            }
            else
            {
                if(s.empty())
                {
                    return false;
                }
                else
                {
                    int a= s.top();
                    if((a=='[' && nums[i]==']') ||(a=='{' && nums[i]=='}')||(a=='(' && nums[i]==')'))
                    {
                        s.pop();
                    }
                    else return false;
                }
            }
         }

         return s.empty();

    }
};
