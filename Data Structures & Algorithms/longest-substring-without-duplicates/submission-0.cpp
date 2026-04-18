class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int start = 0;
        int n =s.size();
        int maxL = 0;
        for(int end = 0;end<n;end++)
        {
            mp[s[end]]++;
            while(mp[s[end]]>1)
            {
                mp[s[start]]--;
                start++;
            }
            maxL = max(maxL,end-start+1);
        }
        return maxL;
    }
};
