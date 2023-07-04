class Solution {
public:
    int minDistance(string &word1, string &word2) {
        int m=word1.size();
        int n=word2.size();
        // vector<vector<int>> dp(m+1,vector<int> (n+1,0));
        vector<int> curr(n+1), prev(n+1);
        for(int i=0;i<m+1;i++)
        {
            for(int j=0;j<n+1;j++)
            {
                if(i==0 || j==0)
                    curr[j]=max(i,j);

                else if(word1[i-1]==word2[j-1])//same
                    curr[j]=prev[j-1];

                else //min(Insert,Delete,Replace)
                curr[j]=1+min(prev[j-1],min(prev[j],curr[j-1]));
            }
            prev=curr;
        }
        return curr[n];
        
    }
};