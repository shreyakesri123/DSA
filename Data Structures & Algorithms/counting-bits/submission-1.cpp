class Solution {
public:
int f(int n)
{
    int count =0;
        while(n)
        {
            if(n&1) count++;
            n=n>>1;
        }
        return count; 
}
    vector<int> countBits(int n) {
        
       vector<int>ans;
       for(int i=0;i<=n;i++)
       {
           ans.push_back(f(i));
       }
       return ans;
    }
};
