class Solution
{
    public:
        void nextPermutation(vector<int> &nums)
        {
            int idx1 = -1;
            int idx2 = -1;
           	// condition 1 ->finding idx1
            for (int i = nums.size() - 2; i >= 0; i--)
            {
                if (nums[i] < nums[i + 1])
                {
                    idx1 = i;
                    break;
                }
            }
            if (idx1 == -1)
                return sort(nums.begin(), nums.end());

           	//condition 2 ->find idx2
            for (int i = nums.size() - 1; i >= 0; i--)
            {
                if (nums[i] > nums[idx1])
                {idx2 = i;
                 break;}
            }

           	//condition 3->swap idx1,2

            int temp = nums[idx1];
            nums[idx1] = nums[idx2];
            nums[idx2] = temp;

            reverse(nums.begin() + idx1 + 1, nums.end());
        }
};