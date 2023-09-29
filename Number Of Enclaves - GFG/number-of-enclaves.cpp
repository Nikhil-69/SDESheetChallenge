//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int>> q;
        for(int i = 0; i < n; i++) {
            if(grid[i][0] == 1) {
                q.push({i, 0});
                grid[i][0] = 0;
            }
            if(grid[i][m - 1] == 1) {
                q.push({i, m - 1});
                grid[i][m - 1] = 0;
            }
        }
        for(int i = 0; i < m; i++) {
            if(grid[0][i] == 1) {
                q.push({0, i});
                grid[0][i] = 0;
            }
            if(grid[n - 1][i] == 1) {
                q.push({n - 1, i});
                grid[n - 1][i] = 0;
            }
        }
        vector<pair<int,int>> dir = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for(auto d : dir) {
                int nx = x + d.first;
                int ny = y + d.second;
                if(nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1) {
                    q.push({nx, ny});
                    grid[nx][ny] = 0;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0;j < m; j++) {
                if(grid[i][j] == 1) {
                    ans++;
                }
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends