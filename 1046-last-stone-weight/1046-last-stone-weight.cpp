class Solution
{
    public:
        int lastStoneWeight(vector<int> &stones)
        {
            if(stones.size()==1)
                return stones[0];
            if(stones.size()==2)
                return abs(stones[0]-stones[1]);
            sort(stones.begin(), stones.end());
            int i=stones.size()-1;
            while(i>=1)
            {
                cout<<i<<endl;
                int x=abs(stones[i-1] - stones[i]);
                stones.erase(stones.end() -2, stones.end());
                i-=2; 
                if (x != 0)
                {
                    stones.push_back(x);
                    sort(stones.begin(), stones.end());
                    i++;
                }
            }
            if(stones.size()==0)
                return 0;
            return stones[0];
        }
};