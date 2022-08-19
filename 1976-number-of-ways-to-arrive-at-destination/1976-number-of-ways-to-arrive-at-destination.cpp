class Solution
{
    public:
        int countPaths(int n, vector<vector < int>> &roads)
        {
            long long mod=1e9+7;
            vector<vector<pair<long long, long long>>> adj(n);
            for (auto it: roads)
            {
                adj[it[0]].push_back({ it[1],it[2] });
                adj[it[1]].push_back({ it[0],it[2] });
            }
            priority_queue<pair<long long, long long>,vector<pair<long long, long long>>,greater<pair<long long, long long>>> pq;	//dist,node
            pq.push({ 0,0 });
            vector<long long> dis(n, LONG_MAX);
            dis[0] = 0;
            vector<long long> ways(n, 0);
            ways[0] = 1;
            while (!pq.empty())
            {
                auto[dist, node] = pq.top();
                pq.pop();
                for (auto[childNode, childDist]: adj[node])
                {
                    if (dis[childNode] > dist + childDist)
                    {
                        dis[childNode] = (dist + childDist);
                        ways[childNode]=ways[node]%mod;
                        pq.push({dis[childNode],childNode});
                    }
                    else if(dis[childNode]==dist+childDist)
                    {
                        ways[childNode]=(ways[childNode]+ways[node])%mod;
                    }
                }
            }
            return ways[n-1];
        }
};