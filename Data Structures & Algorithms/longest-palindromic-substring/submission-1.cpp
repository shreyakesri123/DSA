class Solution {
public:
string f(int i,int j,string s)
{
    if(i>j) return "";
    while(i>=0 && j<s.size() && s[i]==s[j])
    {
        i--;j++;
    }
    return s.substr(i+1,j-i-1);
}
    string longestPalindrome(string s) {
        
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            string a= f(i,i,s);
            string b= f(i,i+1,s);
            if(ans.size()<a.size()) ans=a;
            if(ans.size()<b.size()) ans=b;
        }
        return ans;
    }
};
