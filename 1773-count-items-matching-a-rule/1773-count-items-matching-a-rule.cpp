class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int cnt=0;
        if(ruleKey=="type")
        {
            for(auto v:items)
            {
                if(v[0]==ruleValue)
                    cnt++;
            }
        }
        else if(ruleKey=="color")
        {
            for(auto v:items)
            {
                if(v[1]==ruleValue)
                    cnt++;
            }
        }
        else if(ruleKey=="name")
        {
            for(auto v:items)
            {
                if(v[2]==ruleValue)
                    cnt++;
            }
        }
        return cnt;
    }
};