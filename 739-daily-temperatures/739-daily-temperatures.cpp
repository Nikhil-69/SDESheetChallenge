
#define pii pair<int, int>
    class Solution
    {
        public:
            vector<int> dailyTemperatures(vector<int> &temperatures)
            {
                int n = temperatures.size();
                vector<int> v(n);
                stack<pii> st;
                for (int i = n - 1; i >= 0; i--)
                {
                    if (st.empty())
                    {
                        v[i]=0;
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
                            v[i]=0;
                            st.push({ temperatures[i],i });
                        }
                        else
                        {
                            pii top = st.top();
                            int sec = top.second;
                            v[i] = (sec - i);
                            st.push({ temperatures[i],i });
                        }
                    }
                }
                return v;
            }
    };