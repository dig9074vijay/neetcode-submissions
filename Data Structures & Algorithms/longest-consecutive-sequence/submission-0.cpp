class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            mp[nums[i]] = i;
        }
        int maxSize = 0;
        for(int i =0;i<n;i++)
        {
            int nu = nums[i];
            int size = 0;
            while(mp.find(nu)!=mp.end()){
                nu++;
                size++;
            }
            maxSize = max(maxSize,size);
        }
        return maxSize;
    }
};
