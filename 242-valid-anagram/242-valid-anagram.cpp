class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            if (s.size() != t.size())
                return false;
            vector<int> a(26);
            vector<int> b(26);

            for (int i = 0; i < s.size(); i++)
            {
                a[s[i] - 'a']++;
                b[t[i] - 'a']++;
            }
            return a == b ? true : false;
        }
};