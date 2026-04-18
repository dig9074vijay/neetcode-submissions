class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxA = 0;
        for(int i = 0;i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                int area = min(heights[i],heights[j]) * (j-i);
                // cout<<
                maxA = max(maxA, area);
            }
        }
        return maxA;
    }
};
