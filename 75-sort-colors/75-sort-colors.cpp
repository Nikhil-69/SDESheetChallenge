class Solution
{
    public:
        void sortColors(vector<int> &nums)
        {
            int j = 0;
            int k = nums.size() - 1;
            int i = 0;
            while (i <= k)
            {
                if (nums[i] == 0)
                {
                    swap(nums[i], nums[j]);
                    i++;
                    j++;
                }
                else if (nums[i] == 1) i++;
                else
                {
                    swap(nums[i], nums[k]);
                    k--;
                }
            }
        }
};