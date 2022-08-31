class Solution
{
    public:
        bool canPartition(vector<int> &nums, int i, int target,vector<vector < int>> &dp)
        {
            if (i == nums.size() )
                return  (target == 0);
            if (dp[i][target] != -1)
                return dp[i][target];
            bool include=0;
            if(nums[i]<=target)
            include = canPartition(nums, i + 1, target - nums[i],dp);
            bool exclude = canPartition(nums, i + 1, target,dp);
            return dp[i][target]=include||exclude;
        }
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (auto it: nums)
            sum += it;
        if (sum % 2 == 1)
            return false;
        vector<vector < int>> dp(nums.size()+1, vector<int> ((sum / 2)+1, -1));
        return canPartition(nums, 0, sum / 2,dp);
    }
};