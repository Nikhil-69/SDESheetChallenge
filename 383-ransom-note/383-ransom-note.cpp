class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26,0);
        for(auto c:magazine)
        {
            v[c-'a']++;
        }
        for(auto c:ransomNote)
        {
            if(v[c-'a']==0)
                return 0;
            v[c-'a']--;
        }
        return 1;
    }
};