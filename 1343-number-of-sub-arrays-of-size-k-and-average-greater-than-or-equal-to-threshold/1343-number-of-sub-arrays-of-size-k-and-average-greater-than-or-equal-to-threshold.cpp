class Solution
{
    public:
        int numOfSubarrays(vector<int> &arr, int k, int threshold)
        {
            int target = k * threshold;
            int sum = 0;
            int i = 0, j = 0;
            int ans = 0;
            while (j < arr.size())
            {

                if (j < k)
                {
                    sum += arr[j];
                }
                else
                {
                    cout << sum << " ";
                    if (sum >= target)
                    {
                        ans++;
                    }
                    sum -= arr[i++];
                    sum += arr[j];
                }
                j++;
            }
            if (sum >= target)
            {
                ans++;
            }
            return ans;
        }
};