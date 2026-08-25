class Solution {
public:
    // Map each starting airport to a min-heap of destination airports
    unordered_map<string, priority_queue<string, vector<string>, greater<string>>> mp;
    vector<string> ans;

    void dfs(string airport) {
        
        while (!mp[airport].empty()) {
            string next = mp[airport].top(); 
            mp[airport].pop();             
            dfs(next);
        }
         ans.push_back(airport);
    }

    vector<string> findItinerary(vector<vector<string>>& tickets) {
        // Step 1: Build the graph. Min-heap automatically sorts them.
        for (auto& ticket : tickets) {
            mp[ticket[0]].push(ticket[1]);
        }
       
        dfs("JFK");
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
