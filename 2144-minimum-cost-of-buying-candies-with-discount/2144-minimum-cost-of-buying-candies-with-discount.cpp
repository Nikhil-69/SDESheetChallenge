class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(),cost.end());
        int ans=0;
        int i=n-1;
        while(i>=0)
        {
            if(i>=0)ans+=cost[i--];
            if(i>=0)ans+=cost[i--];
            if(i>=0)i--;
        }
        return ans;
    }
};