class Solution {
public:
    int jump(vector<int>& nums) {
          int count =0;
          int e=0;
          int maxi= 0;
          int n = nums.size();

          for(int i=0;i<n-1;i++)
          {
             maxi= max(maxi,i+nums[i]);
             if(i==e)
             {
                e=maxi;
                count++;
             }
          }
          return count ;
    }
};
