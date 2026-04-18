class Solution {
public:
    int findMin(vector<int> &nums) {
        int l =0;
        int r = nums.size()-1;
        int ans = INT_MAX;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(nums[mid]>=nums[l])
            {
                ans = min(nums[l],ans);
                l = mid+1;  
            }
            else
            {
                r = mid-1;
                ans = min(nums[mid],ans);
            }
        }
        return ans;
    }
};
