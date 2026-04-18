class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> hash(256,0);
        for(int i=0;i<t.size();i++)
        {
            hash[(int)t[i]]++;
        }

        int start = 0;
        int minLength = 1e9;
        int sIndex = -1;
        int cnt = 0;
        for(int end = 0;end<s.size();end++)
        {
            if(hash[s[end]]>0) cnt++;
            hash[s[end]]--;
            while(cnt==t.size())
            {
                if(minLength>end-start+1){
                    minLength = end-start+1;
                    sIndex = start;
                }
                
                hash[s[start]]++;
                if(hash[s[start]]>0) cnt--;
                start++;
            }
        }
        return sIndex!=-1? s.substr(sIndex,minLength):"";
    }
};
