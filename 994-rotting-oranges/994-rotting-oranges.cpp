class Solution {
public:
    int orangesRotting(vector<vector<int>> &grid)
{
    queue<pair<pair<int, int>, int>> q;
    int n = grid.size();
    int m = grid[0].size();
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
                q.push({{i, j}, 0});
            if (grid[i][j] == 1)
                cnt++;
        }
    }
    if(cnt==0)
    return 0;
    int time = 0;
    while (q.size())
    {
        pair<int, int> idx = q.front().first;
        int x = idx.first;
        int y = idx.second;
            time = q.front().second;
        q.pop();
        if (x - 1 >= 0 && grid[x - 1][y] == 1)
        { // left
            grid[x - 1][y] = 2;
            q.push({{x - 1, y}, time + 1});
            cnt--;
        }
        if (x + 1 < n && grid[x + 1][y] == 1)
        { // right
            grid[x + 1][y] = 2;
            q.push({{x + 1, y}, time + 1});
            cnt--;
        }
        if (y - 1 >= 0 && grid[x][y-1] == 1)
        { // bottom
            grid[x][y-1] = 2;
            q.push({{x, y-1}, time + 1});cnt--;
        }
        if (y+ 1 < m && grid[x][y+1] == 1)
        { // top
            grid[x][y+1] = 2;
            q.push({{x, y+1}, time + 1});cnt--;
        }
    }
    return (cnt==0)?time:-1;
}
};