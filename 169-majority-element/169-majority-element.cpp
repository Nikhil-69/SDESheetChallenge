class Solution
{
    public:
        int majorityElement(vector<int> &nums)
        {
            int curr = nums[0];
            int curr_cnt = 0;
            for (int i = 0; i < nums.size(); i++)
            {
                if (curr == nums[i])
                {
                    curr_cnt++;
                }
                else
                {
                    if (curr_cnt <= 0)
                        curr = nums[i];
                    else
                        curr_cnt--;
                }
            }
            return curr;
        }
};