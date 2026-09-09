class Solution {
public:
    string predictPartyVictory(string s) {
         queue<int>r,d;
         int n =s.size();
          
         for(int i=0;i<s.size();i++)
         {
          if(s[i]=='R')r.push(i);
          else d.push(i);
         }

        while(!r.empty() && !d.empty())
        {
          int ri= r.front();r.pop();
          int di= d.front();d.pop();

          if(ri<di)
          {
            r.push(ri+n);
          }
          else
          {
            d.push(di+n);
          }
        }

        return d.empty() ? "Radiant":"Dire";
    }
};