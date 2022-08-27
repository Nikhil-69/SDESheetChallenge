int dp[101][101] = { 0 };
class Solution
{
    public:
        int uniquePaths(int m, int n)
        {
            if (m == 1 || n == 1)
                return 1;
            if (dp[m][n] != 0) return dp[m][n];
            int ans = uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
            return dp[m][n] = ans;
        }
};