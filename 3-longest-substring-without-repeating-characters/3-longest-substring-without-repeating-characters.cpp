class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int i = 0, j = 0, ans = 0, mx = 0;
            unordered_map<char, int> mp;
            while (j < s.size())
            {
                if (mp[s[j]] == 0)
                {
                    mx = max(j - i + 1, mx);
                }
                else
                {
                    while (mp[s[j]] != 0)
                    {
                        mp[s[i]] = 0;
                        i++;
                    }
                }
                mp[s[j]]++;
                j++;
            }
            return mx;
        }
};