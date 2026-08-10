class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        // Base choices: the minimum cost to step on index 0 and index 1
        int first = cost[0];
        int second = cost[1];
        
        // Iteratively calculate the minimum cost for each subsequent step
        for (int i = 2; i < n; i++) {
            int current = cost[i] + min(first, second);
            first = second;  // Move 'first' pointer forward
            second = current; // Move 'second' pointer forward
        }
        
        // The top of the stairs can be reached from either of the last two steps
        return min(first, second);
    }
};
