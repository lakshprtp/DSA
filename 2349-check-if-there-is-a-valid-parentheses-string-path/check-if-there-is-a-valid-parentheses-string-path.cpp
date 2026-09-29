class Solution {
public:
    int m, n;
    vector<vector<vector<int>>> dp;
    bool solve(vector<vector<char>>& grid, int i, int j, int b) {
        // enter , first check this node is valid or not
        if (i >= m || j >= n)
            return false;

        

        // just enter update b
        if (grid[i][j] == '(')
            b++;
        else
            b--;

        if (b < 0)
            return false;
            
        if (dp[i][j][b] != -1) {
            return dp[i][j][b];
        }  

        

        if (i == m - 1 && j == n - 1) {
            if (b == 0)
                return true;
            else
                return false;
        }

        bool down = solve(grid, i + 1, j, b);
        bool right = solve(grid, i, j + 1, b);

        return dp[i][j][b] = right || down;
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        if ((m + n) % 2 == 0)
            return false;
        if (grid[0][0] == ')')
            return false;
        dp.assign(m, vector<vector<int>>(n, vector<int>(m + n, -1)));

        return solve(grid, 0, 0, 0);
    }
};