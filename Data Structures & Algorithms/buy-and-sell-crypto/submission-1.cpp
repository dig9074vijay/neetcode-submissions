class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int n = prices.size();
        int smallest = prices[0];
        for(int i = 0;i<n;i++)
        {
            maxP = max(maxP,prices[i]-smallest);
            smallest  = min(smallest,prices[i]);
        }
        return maxP;
    }
};
