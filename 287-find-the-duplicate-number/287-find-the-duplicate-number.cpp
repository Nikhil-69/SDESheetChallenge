class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
            ios_base::sync_with_stdio(0);
            cin.tie(nullptr);
            cout.tie(nullptr);

            int n = nums.size();
            bool *x = new bool[n];

            for (int i = 0; i < n; i++)
            {
                x[i] = false;
            }

            for (int i = 0; i < n; i++)
            {
                if (x[nums[i] - 1])
                    return nums[i];
                else
                    x[nums[i] - 1] = true;
            }

            return -1;
        }

};