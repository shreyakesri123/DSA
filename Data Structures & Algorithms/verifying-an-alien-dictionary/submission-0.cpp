class Solution {
public:
    bool isAlienSorted(vector<string>& nums, string s) {
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<s.size();i++) mp[s[i]]=i;

        for(int i=0;i<nums.size()-1;i++)
        {
            string a= nums[i] , b= nums[i+1];
            bool matched =false;
            for(int j=0;j<min(a.size(),b.size());j++)
            {
                if(a[j]!=b[j])
                {
                    if(mp[a[j]] >  mp[b[j]]) return false;
                    matched=true;
                    break;
                }
            }
            if(a.size()>b.size() && !matched ) return false;
        }

        return true;
    }
};