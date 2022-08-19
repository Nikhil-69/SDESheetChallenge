class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> ump,ump1;
        for(auto it:nums)
            ump[it]++;
        for(auto it:nums)
        {
            if(ump[it]<=0)
                continue;
            else if(ump1[it]>0)
            {
                ump[it]--;
                ump1[it]--;
                ump1[it+1]++;
            }
            else if(ump[it+1]>0 && ump[it+2]>0)
            {
                ump[it]--;
                ump[it+1]--;
                ump[it+2]--;
                ump1[it+3]++;
            }
            
            else
                return false;
        }
        return true;
        
    }
};