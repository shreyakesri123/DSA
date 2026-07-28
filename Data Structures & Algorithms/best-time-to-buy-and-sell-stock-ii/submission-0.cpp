class Solution {
public:
    int maxProfit(vector<int>& s) {
        
        int sum=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]>s[i-1])
            {
                sum+=s[i]-s[i-1];
            }
        }
         return sum;
    }
};