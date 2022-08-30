class Solution
{
    public:
    
        int uniquePathsWithObstacles(vector<vector < int>> &obstacleGrid, int i, int j,vector<vector<int>> &dp)
        {
            if (i < 0 || j < 0 || obstacleGrid[i][j] == 1) 
                return 0;
            if (i == 0 && j == 0) 
                return 1;
                
            if(dp[i][j]!=-1)
                return dp[i][j];
            return dp[i][j]=uniquePathsWithObstacles(obstacleGrid, i - 1, j,dp) +    
                uniquePathsWithObstacles(obstacleGrid, i, j - 1,dp);
        }
    int uniquePathsWithObstacles(vector<vector < int>> &obstacleGrid)
    {
        vector<vector<int>> dp(101,vector<int> (101,-1));
        return uniquePathsWithObstacles(obstacleGrid, obstacleGrid.size()-1, obstacleGrid[0].size()-1,dp);
    }
};