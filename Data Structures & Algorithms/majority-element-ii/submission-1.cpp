class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int a=INT_MIN, b= INT_MIN;
        int x=0,y=0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(x==0)
            {
                x=1;
                a=nums[i];
            }
            else if(y==0)
            {
                y=1;
                b=nums[i];
            }
            else if(a==nums[i])
            {
                x++;
            }
            else if(b==nums[i]) y++;
            else
            {
                x--;y--;
            }
        }

        x=0;y=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==a) x++;
            if(nums[i]==b) y++;
        }
vector<int> res;
        if (x > n / 3) res.push_back(a);
        if (y > n / 3 && !res.empty() &&  res.back()!=b) res.push_back(b);

        return res;
        
    }
};