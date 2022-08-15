
#define pii pair<int, int>
    class Solution
    {
        public:
            vector<int> dailyTemperatures(vector<int> &temperatures)
            {

                int n = temperatures.size();
                vector<int> v;
                stack<pii> st;
                for (int i = n - 1; i >= 0; i--)
                {
                    if (st.empty())
                    {
                        v.push_back(0);
                        st.push({ temperatures[i],i });
                    }
                    else
                    {
                        while (st.size() && st.top().first <= temperatures[i])
                        {
                            st.pop();
                        }
                        if (st.empty())
                        {
                            v.push_back(0);
                            st.push({ temperatures[i],i });
                        }
                        else
                        {
                            pii top=st.top();
                            int sec=top.second;
                            v.push_back(sec-i);
                            st.push({ temperatures[i],i });
                        }
                    }
                }
                 reverse(v.begin(),v.end());
                return v;
            }
    };