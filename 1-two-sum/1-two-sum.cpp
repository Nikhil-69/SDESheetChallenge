class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
            unordered_map<int, int> mp;
            int n=nums.size();
            for (int i = 0; i < n; i++)
            {
                mp[nums[i]] = i;
            }
            for (int i = 0; i < n; i++)
            {
                if ((mp[target - nums[i]]!=0) && mp[target - nums[i]] != i)
                    return {i,mp[target - nums[i]]};
            }
            return {-1,-1};
        }
};