class Solution
{
    public:

        int minSetSize(vector<int> &arr)
        {
            unordered_map<int, int> mp;
            for (auto it: arr) mp[it]++;
            vector<pair<int, int>> res;
            for (auto it: mp)
            {
                res.push_back({ it.second,
                    it.first });
            }
            sort(res.begin(), res.end(), greater<pair<int, int>> ());
            int temp = 0;
            int cnt = 0;
            for (auto it: res)
            {
                temp += it.first;
                cnt++;
                if (temp >= arr.size() / 2)
                    return cnt;
            }
            return arr.size()/2;
        }
};