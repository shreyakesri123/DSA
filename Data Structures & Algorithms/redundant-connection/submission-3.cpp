class Solution {
public:
   class D {
    vector<int> rank, parent, size;
public:
    D(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int dp(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = dp(parent[node]);
    }

    void dr(int u, int v) {
        int ulp_u = dp(u);
        int ulp_v = dp(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

};
    vector<int> findRedundantConnection(vector<vector<int>>& nums) {
         
         int n = nums.size();
         D dd(n);
         for(auto it:nums)
         {
            int a= it[0], b= it[1];
            if(dd.dp(a)!=dd.dp(b))
            {
                dd.dr(a,b);
            }
            else
            {
                return {a,b};
                break;
            }
         }
         return {-1};
    }
};
