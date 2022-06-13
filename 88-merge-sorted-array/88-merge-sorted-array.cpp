class Solution
{
    public:
        void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
        {
            double j = ceil((m + n) / 2);
            for (int i = 0; i < n; i++)
            {
                nums1[m + i] = nums2[i];
            }
            while (j > 0) 
            {
                cout << j << " ";
                for (int i = 0; i + j < m + n; i++)
                {
                    if (nums1[i] > nums1[i + j])
                        swap(nums1[i], nums1[i + j]);
                }
                if(j==1)
                    break;
                j = ceil(j / 2);
                
            } 
        }
};