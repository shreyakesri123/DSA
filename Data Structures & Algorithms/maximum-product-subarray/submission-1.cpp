class Solution {
public:
    int maxProduct(vector<int>& nums) {
         
         int k=1;
         int a= INT_MIN , b= INT_MIN;
         for(int i=0;i<nums.size();i++)
         {
            k=k*nums[i];
            a= max(a,k);
            if(k==0) k=1;
         }
         k=1;

         for(int i=nums.size()-1;i>=0;i--)
         {
            k=k*nums[i];
            b= max(b,k);
            if(k==0) k=1;
         }
       return max(a,b);
    }
};
