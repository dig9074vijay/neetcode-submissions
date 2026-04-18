class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long product = 1;
        int n = nums.size();
        vector<int> ans(n,1);
        vector<int> left(n,1);
        vector<int> right(n,1);
        left[0] = nums[0];
        right[n-1] = nums[n-1];
        for(int i =1;i<n;i++)
        { 
            left[i] = nums[i]*left[i-1]; 
            right[n-i-1] = nums[n-i-1]*right[n-i]; 
        }

        for(int i =0;i<n;i++)
        { 
            int l = i>0?left[i-1]:1;
            int r = i==n-1?1:right[i+1];
            ans[i] = l * r;
        }
        
        
        return ans;
    }
};
