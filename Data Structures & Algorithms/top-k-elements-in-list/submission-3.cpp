class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        int size = nums.size();
        // Creating freq map
        for( int i  = 0;i<size;i++)
        {
            count[nums[i]]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        for(const auto &x:count)
        {
             pq.push({x.second,x.first});
            if(pq.size()>k)
                pq.pop();
           
        }

        vector<int> ans;

        while(!pq.empty())
        {
            int top = pq.top().second;
            pq.pop();
            ans.push_back(top);
        }

        return ans;
    }
};
