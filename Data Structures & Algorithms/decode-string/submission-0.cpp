class Solution {
public:
    string decodeString(string s) {
        stack<string> str_stack;
        stack<int> num_stack;
        string curr_str = "";
        int curr_num = 0;

        // 2 3 
        // "" a 
        
        for (char c : s) {
            if (isdigit(c)) {
                // Accumulate the multiplier (handles multi-digit numbers)
                curr_num = curr_num * 10 + (c - '0');
            } 
            else if (c == '[') {
                // Push current state to save context, then reset
                num_stack.push(curr_num);
                str_stack.push(curr_str);
                curr_num = 0;
                curr_str = "";
            } 
            else if (c == ']') {
                // Decode the current segment
                int repeat_times = num_stack.top();
                num_stack.pop();
                
                string prev_str = str_stack.top();
                str_stack.pop();
                
                // Repeat current string segment
                while (repeat_times--) {
                    prev_str += curr_str;
                }
                
                // Update current working string
                curr_str = prev_str;
            } 
            else {
                // Normal alphabetic characters
                curr_str += c;
            }
        }
        
        return curr_str;
    }
};