class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int size = nums.size();
        for( int i  = 0;i<size;i++)
        {
            mp[nums[i]]++;
        }
        map<int,vector<int>> m;
        for(const auto &ele:mp)
        {
            m[ele.second].push_back(ele.first);
        } 

        vector<vector<int>> tempAns;
        int tempk = k;
        for(const auto &ele:m)
        {
            tempAns.push_back(ele.second);
        }
         vector<int> temp;
        
        for(int i = tempAns.size()-1;i>=0;i--)
        {
            for(auto x: tempAns[i])
            {
            temp.push_back(x);
            k--;
            }

            if(k==0) break;
        }

        return temp;
    }
};
