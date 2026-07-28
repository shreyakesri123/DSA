class Solution {
public:
    int evalRPN(vector<string>& nums) {
         stack<int>s;

         for(int i=0;i<nums.size();i++)
         {
            string a= nums[i];
            if(a=="+" || a=="-" || a=="/" || a=="*")
            {
                int aa= s.top();s.pop();
                int b= s.top();s.pop();

                if(a=="+")
                {
                    s.push(b+aa);
                }
                else if(a=="-") s.push(b-aa);
                else if(a=="/") s.push(b/aa);
                else if(a=="*") s.push(aa*b);
            }
            else
            {
                s.push(stoi(a));
            }
         }

         return s.top();

    }
};
