class Solution {
public:

    string encode(vector<string>& s) {
        string ans;
        for(auto it:s)
        {
         int n = it.size();
         ans+= to_string(n)+"#"+it;
        }
        return ans;
    }

    vector<string> decode(string s) {
      vector<string>ans;
      
      
      int j=0;
      while(j<s.size())
      {
         int i=j;
         while(s[i]!='#')
         {
            i++;
         }
         int a= stoi(s.substr(j,i-j));
         string b= s.substr(i+1,a);
         ans.push_back(b);
         j=i;
         j+=a+1;
      }
      return ans;
    }
};
