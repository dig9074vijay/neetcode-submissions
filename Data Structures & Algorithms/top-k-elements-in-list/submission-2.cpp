class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int size = nums.size();
        // Creating freq map
        for( int i  = 0;i<size;i++)
        {
            mp[nums[i]]++;
        }

        // Used ordered map for sorting and using freq as the key to store the numbers which have that freq
        map<int,vector<int>, greater<int>> m;
        for(const auto &ele:mp)
        {
            m[ele.second].push_back(ele.first);
        } 

        
        vector<int> temp;
        for(const auto &ele:m)
        {
            for(auto x: ele.second)
            {
            temp.push_back(x);
            k--;
            }
            if(k==0) break;
        }

        return temp;
    }
};
