class Solution {
public:
    bool validPalindrome(string s) {
         
         int n =s.size();
         int i=0,j=n-1;
         int count =0,c=0;
         while(i<j)
         {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else 
            {
                i++;
                count++;
            }
         }

        i=0,j=n-1;
         while(i<j)
         {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else 
            {
                j--;
                c++;
            }
         }
        return count<=1 || c<=1;
    }
};