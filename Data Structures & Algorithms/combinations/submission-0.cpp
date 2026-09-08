class Solution {
public:
 vector<vector<int>>ans;
 void f(int ind,int n,int k,vector<int>&hello){
    
    if(hello.size()==k)
    {
        ans.push_back(hello);
        return ;
    }

    for(int i=ind;i<=n;i++)
    {
        hello.push_back(i);
        f(i+1,n,k,hello);
        hello.pop_back();
    }

    
 }
    vector<vector<int>> combine(int n, int k) {
        vector<int>hello;

        f(1,n,k,hello);
        return ans;
    }
};