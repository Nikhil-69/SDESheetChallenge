class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
     int s=neededTime[0];
        int m=neededTime[0];
        int ans=0;
        for(int i=1;i<neededTime.size();i++)
        {
            if(colors[i-1]==colors[i])
            {
                s=s+neededTime[i];
                m=max(m,neededTime[i]);
            }
            else
            {
                ans=ans+(s-m);
                s=neededTime[i];
                m=neededTime[i];
                
                
            }
        }
        ans=ans+(s-m);
       return(ans);
        
    }
};