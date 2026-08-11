class Solution {
public:

    int mySqrt(int x) {
        
        if(x<=1) return x;
        int ans=0;

        int s=1, e= x/2 +1 ;
        while(s<=e)
        {
            int mid= s+(e-s)/2;
            if(mid== x/mid )
            {
                ans= mid;
                break;
            }
            else if(mid>x/mid){ e=mid-1;}
            else 
            {
                s=mid+1; 
                ans = mid ;
            }
        }
        return ans;
    }
};