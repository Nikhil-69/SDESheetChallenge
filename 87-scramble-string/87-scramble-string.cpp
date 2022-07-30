class Solution
{
    public:
        unordered_map<string,bool> ump;
        bool solve(string s1, string s2)
        {
            if(ump.find(s1+" "+s2)!=ump.end())
                return ump[s1+" "+s2];
            if (s1.size() == 0)
                return false;
            if (s1 == s2)
                return true;
            if (s1.size() == 1 && s1 != s2)
            {
                return false;
            }
            int n=s1.size();
            bool flag = false;
            for (int i = 1; i < n; i++)
            {
               	//if no swaping is done  || if swaping is done
                if ((solve(s1.substr(0, i), s2.substr(0, i)) and solve(s1.substr(i, n), s2.substr(i, n))) or
                    (solve(s1.substr(0, i), s2.substr(n - i, n)) and solve(s1.substr(i, n), s2.substr(0,n-i))))
                {
                    flag = true;
                }
            }
            return ump[s1+" "+s2]=ump[s2+" "+s1]=flag;
        }
        bool isScramble(string s1, string s2)
        {
            return solve(s1,s2);
        }
};