class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int mx=0;
        vector<bool> result;
        for(int i=0;i<n;i++){
            mx=max(candies[i],mx);
        }
        for(int i=0;i<n;i++){
            result.push_back(candies[i]+extraCandies>=mx);
        }
        return result;
    }
};