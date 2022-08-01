class Solution
{
    public:
        int findMin(vector<int> &nums)
        {
            int start = 0;
            int end = nums.size() - 1;
            int n = nums.size();
            
            while (start <= end)
            {
                int mid = start + (end - start) / 2;
                int prev=(mid-1+n)%n;
                int next=(mid+1)%n;
                if (nums[mid] <= nums[prev] and nums[mid] <= nums[next])
                {
                    return nums[mid];
                }

                if (nums[mid] > nums[end])	//left is sorted so search in right
                    start = mid + 1;

                if(nums[mid]<nums[end])
                    end=mid-1;
                    
            }
            return 0;
        }
};