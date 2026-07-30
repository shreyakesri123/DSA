class Solution {
public:
    string addBinary(string a, string b) {

       reverse(a.begin(),a.end());
       reverse(b.begin(),b.end());
       string ans;

       int i=0,j=0;

       int n =a.size() , m=b.size();
       int carry=0;
       while(i<n || j<m || carry)
       {
          int sum=carry;
          sum+= (i<n)?a[i++]-'0':0;
          sum+= (j<m)?b[j++]-'0':0;

          ans+= char(sum%2)+'0';
          carry= sum/2;
       } 

       reverse(ans.begin(),ans.end());
       return ans;
    }
};