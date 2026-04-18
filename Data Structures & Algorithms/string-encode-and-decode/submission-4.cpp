class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str;
        for(int i=0;i<strs.size();i++)
        {
            encoded_str+= strs[i]==""?"`":strs[i];
            if(i==strs.size()-1)
            {

            }
            else
            {
                encoded_str += "-";
            }
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        stringstream ss(s);
        string token;
        vector<string> ans;
        while(getline(ss,token,'-'))
        {
            if(token=="`")
            {
                ans.push_back("");    
            }
            else
            ans.push_back(token);
        }
        return ans;
    }
};
