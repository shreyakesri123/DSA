class Solution {
private:
    // 1. Define the 4 movement offsets: Down, Up, Right, Left
    int dRow[4] = {1, -1, 0, 0};
    int dCol[4] = {0, 0, 1, -1};

    void dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int r, int c, int& count) {
        // 2. Process current node immediately
        visited[r][c] = true;
        count++;

        int rows = grid.size();
        int cols = grid[0].size();

        // 3. Loop through all 4 directions
        for (int i = 0; i < 4; i++) {
            int newR = r + dRow[i];
            int newC = c + dCol[i];

            // 4. One unified "IF" statement to validate the next step
            if (newR >= 0 && newR < rows && newC >= 0 && newC < cols) { // Inside bounds
                if (grid[newR][newC] == 1 && !visited[newR][newC]) {   // Is valid unvisited land
                    dfs(grid, visited, newR, newC, count);             // Move there
                }
            }
        }
    }

public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int max_area = 0;

        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                if (grid[r][c] == 1 && !visited[r][c]) {
                    int count = 0; 
                    dfs(grid, visited, r, c, count);
                    max_area = max(max_area, count);
                }
            }
        }
        return max_area;
    }
};
