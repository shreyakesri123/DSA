class Solution {
public:

    string encode(vector<string>& strs) {
       string ans;
       for(auto it:strs)
       {
        int n = it.size();
        ans+=to_string(n)+"#"+ it;
       }
       return ans;
    }

    vector<string> decode(string s) {
         int n =s.size();
           vector<string>ans;
           int a=0;
           string b;
           int i=0;

           while(i<s.size())
           {
             int j=i;
             while(j<n && s[j]!='#')
             {
                a=a*10+ s[j++]-'0';
             }
             b= s.substr(j+1,a);
             ans.push_back(b);
             i = j+b.size()+1;
             a=0;
           }
           return ans;
    }
};
