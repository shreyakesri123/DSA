/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
static bool cmp(Interval a , Interval b)
{
    return a.start<b.start ;
}
    bool canAttendMeetings(vector<Interval>& nums) {
        int n =  nums.size();
         if(n==0) return true;

         sort(nums.begin(),nums.end(),cmp);
          
         int b= nums[0].end;
         for(int i=1;i<nums.size();i++)
         {
            if(nums[i].start<b)
            {
                return false;
            }
            else b= nums[i].end;
         }
         return true;

    }
};
