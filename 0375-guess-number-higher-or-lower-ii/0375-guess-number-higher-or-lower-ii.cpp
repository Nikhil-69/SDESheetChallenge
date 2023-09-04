class Solution {
public:
    vector<vector<int>> dp{201,vector<int> (201,-1)};
    int get(int start,int end)
    {
        if(start>=end)
            return 0;
        int mn=INT_MAX;
        if(dp[start][end]!=-1)
            return dp[start][end];
        for(int i=start;i<end;i++)
        {
            mn=min(mn,i+max(get(start,i-1),get(i+1,end)));
        }
        return dp[start][end]=mn;
        
    }
    int getMoneyAmount(int n) {
        return get(1,n);
    }
};