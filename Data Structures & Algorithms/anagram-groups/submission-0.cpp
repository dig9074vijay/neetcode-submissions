class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int n = strs.size();
        vector<bool> visited(n,false);
        vector<vector<string>> ans;
        for(int i = 0;i<n;i++)
        {
            if(visited[i])
                continue;
            string s = strs[i];
            vector<string> ans1;
            ans1.push_back(s);
            for(int j = i+1;j<n;j++)
            {
                string sorted = strs[j];
                sort(sorted.begin(),sorted.end());
                sort(s.begin(),s.end());
                cout<<s<<" "<<strs[j]<<" "<<sorted<<endl;
                if(s == sorted)
                {
                    ans1.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            ans.push_back(ans1);

        }

        return ans;
        
    }
};
