class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int a=0,b=0;
        for(auto it:bills)
        {
            if(it==5) a++;
            else if(it==10)
            {
                b++;
                if(a<1) return false;
                a--;
            }
            else if(it==20)
            {
                if(a>=1&&b>=1)
                {
                    a--;
                    b--;
                }
                else if(a>=3)
                {
                    a=a-3;
                }
                else return false;
            }
        }

        return true;
    }
};