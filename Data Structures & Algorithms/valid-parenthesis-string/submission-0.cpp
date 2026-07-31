class Solution {
public:
    bool checkValidString(string s) {
        
        int l=0,h=0;
        for(auto it:s)
        {
            if(it=='(')
            {
                l++;h++;
            }
            else if(it==')')
            {
                l--;h--;
            }
            else 
            {
                l--;
                h++;
            }
            if(h<0) return false;
            if(l<0)l=0;
        }

        return l==0;
    }
};
