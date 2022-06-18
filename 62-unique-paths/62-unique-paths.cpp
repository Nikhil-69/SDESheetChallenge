class Solution
{
    public:
        int uniquePaths(int m, int n)
        {
            double ans=1;
            if(n>m)
                swap(n,m);
            for (int i = 0; i < n - 1; i++)
            {
                ans *= double(m + n - 2 - i);
                ans/=double(i+1);
            }
            return int(ans);
        }
};