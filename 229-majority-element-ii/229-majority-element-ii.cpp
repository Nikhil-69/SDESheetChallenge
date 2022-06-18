class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            int crr1 = -1;
            int crr2 = -1;
            int cnt1 = 0;
            int cnt2 = 0;
            for (int i: nums)
            {
                if (i == crr1)
                    cnt1++;
                else if (i == crr2)
                    cnt2++;
                else if (cnt1 == 0)
                {
                    crr1 = i;
                    cnt1 = 1;
                }
                else if (cnt2 == 0)
                {
                    crr2 = i;
                    cnt2 = 1;
                }
                else
                {
                    cnt1--;
                    cnt2--;
                }
            }
            
            cnt1 = cnt2 = 0;
            for (auto i: nums)
            {
                if (i == crr1)
                    cnt1++;
                if (i == crr2)
                    cnt2++;
            }
            
            vector<int> v;
            if (cnt1 > nums.size() / 3)
                v.push_back(crr1);
            if (cnt2 > nums.size() / 3 && crr1 != crr2)
                v.push_back(crr2);

            return v;
        }
};