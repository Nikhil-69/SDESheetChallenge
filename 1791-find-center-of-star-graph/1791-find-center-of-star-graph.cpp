class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // vector<vector<int>> adj(n+1);
        // for(auto it:edges)
        // {
        //     adj[it[0]].push_back(it[1]);
        //     adj[it[1]].push_back(it[0]);
        // }
        
        if(edges[0][0]==edges[1][0])
            return edges[0][0];
        if(edges[0][0]==edges[1][1])
            return edges[0][0];
        if(edges[0][1]==edges[1][0])
            return edges[0][1];
        // if(edges[0][1]==edges[1][1])
            return edges[0][1];
        
    }
};