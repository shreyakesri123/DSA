class Solution {
public:
    string reorganizeString(string s) {
         
         unordered_map<char,int>mp;
         for(auto it:s)mp[it]++;

         if(mp.size()==1) return "";

         priority_queue<pair<int,char>>pq;
         for(auto it:mp)pq.push({it.second,it.first});

         string ans;
         while(!pq.empty())
         {
            int a= pq.top().first;
            char b= pq.top().second;
            pq.pop();
            if(a==0) break;
            
            if(!pq.empty() && !ans.empty() && ans.back()==b)
            {
                int c= pq.top().first;
                char d= pq.top().second;
                pq.pop();
                if(c==0) break;
                ans+=d;
                mp[d]--;
               pq.push({mp[d],d});
            }
            else
            {
             ans+=b;
             mp[b]--;
            }
            
            pq.push({mp[b],b});           
         }

         if(ans.size()==s.size()) return ans;
         else return "";
    }
};