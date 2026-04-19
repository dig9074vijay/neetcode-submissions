class Solution {
public:

    void solve(int i,vector<int>& nums, int target, vector<vector<int>> &result, vector<int> &row)
    {
        if(target==0){  
                result.push_back(row);
                return;
        }
          if(i==nums.size()) return;
        solve(i+1,nums,target,result,row);
        row.push_back(nums[i]);
        if(target-nums[i]>=0)
        solve(i,nums,target-nums[i],result,row);
        row.pop_back();
        
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> row;
        solve(0,nums,target,result,row);
        return result;
    }
};
