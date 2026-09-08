class Solution {
public:
int sum=0;
void f(int i,int a,vector<int>&nums){
    if(i>=nums.size())
    {
        sum+=a;
        return ;
    }
    f(i+1,a^nums[i],nums);

    f(i+1,a,nums);
}
    int subsetXORSum(vector<int>& nums) {
        f(0,0,nums);  

        return sum;
    }
};