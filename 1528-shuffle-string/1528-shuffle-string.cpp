class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffled=s;
        for(int i=0;i<s.size();i++)
        {
            shuffled[indices[i]]=s[i];
        }
        return shuffled;
    }
};