class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int start = 0;
        int maxL = 0;
        unordered_map<char,int> mp;
        int maxFreq = 0;
        for(int end = 0;end<n;end++)
        {
            mp[s[end]]++;
            maxFreq = max(maxFreq, mp[s[end]]);
            while(k+maxFreq < end-start+1)
            {
                mp[s[start]]--;
                start++;
            }
            maxL = max(maxL,end-start+1);
        }
        return maxL;
    }
};
