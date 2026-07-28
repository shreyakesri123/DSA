class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>s;

        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int k= j+1 , l= n-1;
                long long sum = nums[i]+nums[j];
                while(k<l)
                {
                    long long  a= sum+nums[k]+nums[l];
                    if(a==target)
                    {
                        s.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;l--;
                    }
                    else if(a<target)k++;
                    else l--;
                }
            }
        }


        for(auto it:s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};