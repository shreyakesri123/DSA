class Solution {
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>> isPrereq(n, vector<bool>(n, false));
        
        // Mark direct prerequisites
        for (auto& p : prerequisites) {
            isPrereq[p[0]][p[1]] = true;
        }
        
        // Compute transitive closure using Floyd-Warshall
        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    isPrereq[i][j] = isPrereq[i][j] || (isPrereq[i][k] && isPrereq[k][j]);
                }
            }
        }
        
        // Answer each query
        vector<bool> result;
        for (auto& q : queries) {
            result.push_back(isPrereq[q[0]][q[1]]);
        }
        
        return result;
    }
};
