class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIdx= 0;
        for(int i =0;i<n-1;i++)
        {
            if(nums[i]==0 && i>=maxIdx)
            {
                return false;
            }
            maxIdx = max(maxIdx,nums[i]+i);
        }
        return true;
    }
};
