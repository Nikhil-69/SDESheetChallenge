class Solution
{
    public:
    vector<int> v;
    void countBits_help(int n)
    {
        if (n == 0)
        {
            v.push_back(0);
           return;
        };
        int cnt = 0;
        int temp = n;
        while(temp != 0){
            cnt++;
            temp &= (temp-1);
        }
        // 100010000
        //     &
        // 011111111
        //     =1
        v.push_back(cnt);
        countBits_help(n - 1);
    }
    vector<int> countBits(int n)
    {
        countBits_help(n);
        reverse(v.begin(), v.end());
        return v;
    }
};