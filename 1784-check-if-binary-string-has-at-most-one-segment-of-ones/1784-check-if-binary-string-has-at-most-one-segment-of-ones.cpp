class Solution {
public:
    bool checkOnesSegment(string s) {
        bool flag=0;
        for(auto c:s)
        {
            if(c=='0')
                flag=1;
            if(c=='1' && flag==1)
                return false;
        }
        return true;
    }
};