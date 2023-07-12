class Solution
{
    public:
    int findMinArrowShots(vector<vector < int>> &p)
    {
        int n = p.size();
        sort(p.begin(), p.end());
        int cnt = 0;
        int j,end;
        for (int i = 0; i < n;)
        {
            end=p[i][1];
            for (j = i + 1; j < n; j++)
            {
                if (end >= p[j][0])
                    end=min(end,p[j][1]);
                else
                    break;
            }
            cnt++;
            i = j;
        }
        return cnt;
    }
};