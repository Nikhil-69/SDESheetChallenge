class Solution
{
    public:
        int minPathSum(vector<vector < int>> &grid,int i,int j,int m,int n,vector<vector < int>> &dp){
            if(i==m || j==n)
                return INT_MAX;
            if(i==m-1 && j==n-1)
                return grid[i][j];
            if(dp[i][j]!=-1)
                return dp[i][j];
            int right=minPathSum(grid,i+1,j,m,n,dp);
            int down=minPathSum(grid,i,j+1,m,n,dp);
            return dp[i][j]=min(down,right)+grid[i][j];   
        }
        int minPathSum(vector<vector < int>> &grid)
        {
            vector<vector<int>> dp(201,vector<int> (201,-1));
            int m = grid.size();
            int n = grid[0].size();
            return minPathSum(grid, 0, 0,m,n,dp);
        }
};