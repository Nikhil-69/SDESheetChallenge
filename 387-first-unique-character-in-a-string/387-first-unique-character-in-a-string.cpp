class Solution {
public:
    int firstUniqChar(string &s) {
        vector<int> v(26,0);
        for(auto it : s)
        {
            v[it-'a']+=1;
        }
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};