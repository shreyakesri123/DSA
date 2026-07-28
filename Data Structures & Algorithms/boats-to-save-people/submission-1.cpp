class Solution {
public:
    int numRescueBoats(vector<int>& nums, int target) {
        
       sort(nums.begin(),nums.end());
       
       int s=0,e= nums.size()-1;
       int count =0;

       while(s<=e)
       {
        if(s==e){count++; continue;}
        int sum = nums[s]+nums[e];
        if(sum<=target)
        {
            s++;e--;
            
        }
        else if(sum<target)s++;
        else e--;
         count++;
       }
       
       return count ;

       
    }
};