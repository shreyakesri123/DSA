class Solution {
public:
int f(int n) {
        int output = 0;

        while (n > 0) {
            int digit = n % 10;
            digit = digit * digit;
            output += digit;
            n /= 10;
        }
        return output;
    }
    bool isHappy(int n) {
        if(f(f(f(f(f(f(n))))))==1) return true;
        return false;
    }
};
