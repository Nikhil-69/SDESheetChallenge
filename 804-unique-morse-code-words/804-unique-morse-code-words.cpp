class Solution
{
    public:
        int uniqueMorseRepresentations(vector<string> &words){
            vector<string> v={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            set<string> s;
            for(auto it:words)
            {
                string temp;
                for(auto c:it)
                {
                    temp+=v[c-'a'];
                }
                s.insert(temp);
            }
            return s.size();
        }
};