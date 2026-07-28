class Solution {
public:
    string mergeAlternately(string a, string b) {
         
         int n = a.size(), m= b.size();
         int l= min(n,m);

         string hello;
         for(int i=0;i<l;i++)
         {
            hello+=a[i];
            hello+=b[i];
         }

         while(l<n)hello+=a[l++];
         while(l<m)hello+=b[l++]; 
         return hello;

    }
};