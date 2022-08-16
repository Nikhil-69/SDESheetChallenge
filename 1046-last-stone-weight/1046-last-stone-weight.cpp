class Solution
{
    public:
        int lastStoneWeight(vector<int> &stones)
        {
            priority_queue<int> pq;
            for(auto c:stones){
                pq.push(c);
            }
            while(pq.size()>1){
                auto f=pq.top();
                pq.pop();
                auto s= pq.top();
                pq.pop();
                if(abs(f-s)) pq.push(abs(f-s));
            }
            if(pq.empty()) return 0;
            return pq.top();
            
        }
};