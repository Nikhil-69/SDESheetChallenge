class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
            ios_base::sync_with_stdio(0);
            cin.tie(nullptr);
            cout.tie(nullptr);
            
            unordered_map<int, bool> mp;
            for (int i = 0; i < nums.size(); i++)
            {
                if (mp[nums[i]] == 1)
                    return nums[i];
                mp[nums[i]] = true;
            }
            return -1;
        }
};