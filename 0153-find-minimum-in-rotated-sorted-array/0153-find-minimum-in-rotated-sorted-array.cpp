class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;int h=nums.size()-1;
        int mid=l+(h-l)/2;
        int mn=INT_MAX;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            if(nums[mid]>=nums[l])
            {
                mn=min(mn,nums[l]);
                l=mid+1;
            }
            else if(nums[mid]<=nums[h])
            {
                mn=min(mn,nums[mid]);
                h=mid-1;
            }
        }
        return mn;
        
    }
};