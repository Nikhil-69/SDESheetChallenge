class Solution
{
    public:

        bool check_palindrome(string &s, int i, int j)
        {
            while (j > i)
            {
                if (s[i++] != s[j--])
                    return false;
            }
            return true;
        }
    int mincut_helper(string &s, int i, int j,vector<vector<int>> &dp)
    {
        if (dp[i][j] != -1)
            return dp[i][j];
        if (i >= j || check_palindrome(s, i, j))
            return 0;
        
        int ans = INT_MAX;
        for (int k = i; k < j; k++)
        {
            
            if (check_palindrome(s, i, k))
            { 
                if (dp[k + 1][j] == -1)
                dp[k + 1][j] = mincut_helper(s, k + 1, j,dp);
                
                int temp = 1 + dp[k + 1][j];
                ans = min(ans, temp);
            }
        }
        return dp[i][j] = ans;
    }
    int minCut(string s)
    {
        int n = s.length();
        vector<vector<int>> dp (n+1, vector<int> (n+1, -1));
        return mincut_helper(s, 0, n- 1,dp);
    }
};