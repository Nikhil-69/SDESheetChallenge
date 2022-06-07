class StockSpanner {
public:
    vector<int> v;
    stack<pair<int,int>> s;
    StockSpanner() {
    }
    int next(int price) {
        v.push_back(price);
        int ans=1;
        while(!s.empty()&& s.top().first<=price){
            ans+=s.top().second;
            s.pop();
        }
        s.push({price,ans});
        return ans;
    }
    
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */