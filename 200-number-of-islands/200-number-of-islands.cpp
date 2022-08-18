
#define pii pair<int, int>
class Solution
{
    public:
    void bfs(vector<vector < char>> &grid, int i, int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        queue<pii> q;
        q.push({ i,j });
        while (q.size())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            vector<pii> dir = {{ 1,0 },{ -1,0 },{ 0, 1 },{ 0,-1 }};
            for (auto it: dir)
            {
                int newx=x + it.first;
                int newy= y + it.second;
                if (newx >= 0 && newx < n && newy >= 0 && newy < m && grid[newx][newy] == '1')
                {
                    q.push({ newx,newy});
                    grid[newx][newy] = '0';
                }
            }
        }
        return;
    }
    int numIslands(vector<vector < char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == '1')
                {
                    bfs(grid, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};