class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        
        int n = nums.size() , m = nums[0].size();
        int s=0,e =n*m-1;

        while(s<=e)
        {
            int mid= s+(e-s)/2;
            int ele= nums[mid/m][mid%m];
            if(ele==target) return true;
            else if(ele < target) s=mid+1;
            else e=mid-1;
        }
        return 0;
    }
};
