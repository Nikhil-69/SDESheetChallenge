class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle,int i,int j,vector<vector<int>>& dp)
    {
        if(j>=triangle[i].size())
            return INT_MAX;
        if(i==triangle[triangle.size()-1].size()-1)
            return triangle[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int down=minimumTotal(triangle,i+1,j,dp);
        int downRight=minimumTotal(triangle,i+1,j+1,dp);
        return dp[i][j]=min(down,downRight)+triangle[i][j];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp(201,vector<int> (201,-1));
        return minimumTotal(triangle,0,0,dp);
    }
};