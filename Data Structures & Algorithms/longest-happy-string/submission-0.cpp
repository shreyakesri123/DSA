class Solution {
public:
    string longestDiverseString(int aa, int bb, int cc) {
         string ans;

         priority_queue<pair<int,int>>pq;
         unordered_map<char,int>mp;
         if(aa>0)
        { pq.push({aa,'a'});  mp['a']=aa;}
        if(bb>0)
         {pq.push({bb,'b'}); mp['b']=bb ;}
         if(cc>0)
        { pq.push({cc,'c'});mp['c']=cc;}
         
       
      
         while(!pq.empty()){
            int a= pq.top().first;
            char b= pq.top().second;
            pq.pop();
            if(a==0) break;
            int n =ans.size();
            
            if(!ans.empty() && !pq.empty() && ans.size()>=2 && ans[n-2]==b && ans[n-1]==b){
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
         return ans;
    }
};