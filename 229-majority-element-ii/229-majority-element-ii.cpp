class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            unordered_map<int, int> mp;
            int n = nums.size();
            vector<int> v;
            for (int i = 0; i < n; i++)
            {
                mp[nums[i]]++;
                if (mp[nums[i]] > n / 3)
                {
                    if (v.size() == 0)
                        v.push_back(nums[i]);
                    else if(v[0]!=nums[i])
                    {
                         v.push_back(nums[i]);
                        return v;
                        break;
                    }  
                }
            }
            return v;
        }
};