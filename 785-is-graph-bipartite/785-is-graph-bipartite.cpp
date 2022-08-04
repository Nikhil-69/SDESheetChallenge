class Solution {
public:
    bool BpCheck(vector<vector<int >> & g,vector<int> &color,int node)
    {
        queue<int> q;
        q.push(node);
        color[node]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            for(auto u:g[front]){
                if(color[u]==-1){
                    color[u]=1-color[front];
                    q.push(u);
                }
                else if(color[u]==color[front]){
                    return false;
                }
            } 
        }
        return true; 
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1 && !BpCheck(graph,color,i))
                return false;
        }
        return true;
        
    }
};