class Solution {
public:
    bool bpcheckBFS(vector<vector<int>> &g,vector<int> &color,int node){
        queue<int> q;
        q.push(node);
        color[node]=1;
        while(q.size()){
            int front=q.front();
            q.pop();
            for(auto it:g[front]){
                if(color[it]==-1)
                {
                    color[it]=1-color[front];
                    q.push(it);
                }
                else if(color[it]==color[front])
                    return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1 && !bpcheckBFS(graph,color,i)){
                    return false;
            } 
        }
        return true;
    }
};