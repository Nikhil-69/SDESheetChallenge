class Solution {
public:
    bool isCyclic_DFS(int src,vector<bool> &dfsVis,vector<bool> &vis,vector<vector<int>> &g){
        vis[src]=1;
        dfsVis[src]=1;
        for(auto u:g[src]){
            if(vis[u]==false){
                if(isCyclic_DFS(u,vis,dfsVis,g))return true;
            }else if(dfsVis[u])
                return true;
            
        }
        dfsVis[src]=0;
        return false;
        
    }
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto it:edges)
            adj[it[1]].push_back(it[0]);
        vector<bool> vis(n,0);
        vector<bool> callStack(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i] && isCyclic_DFS(i,callStack,vis,adj))
                    return false;
        }
        return true;
    }
};