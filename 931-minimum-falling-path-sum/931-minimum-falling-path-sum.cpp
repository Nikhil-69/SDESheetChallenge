class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix,int i,int j,vector<vector<int>> &dp)
    {
        if(j>matrix.size()-1)
            return INT_MAX;
        if(i==matrix.size()-1)
            return matrix[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int dLeft=minFallingPathSum(matrix,i+1,j-1,dp);
        int down=minFallingPathSum(matrix,i+1,j,dp);
        int dRight=minFallingPathSum(matrix,i+1,j+1,dp);
        return dp[i][j]=min(dLeft,min(dRight,down))+matrix[i][j];
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>> dp(101,vector<int> (101,-1));
        int mn=INT_MAX;
        for(int i=0;i<matrix.size();i++)
            mn=min(mn,minFallingPathSum(matrix,0,i,dp));
        return mn;
    }
};