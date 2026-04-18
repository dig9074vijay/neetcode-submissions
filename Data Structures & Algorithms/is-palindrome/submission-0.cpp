class Solution {
public:
    bool isPalindrome(string s) {
        string filteredString;
        int n = s.size();
        for(int i = 0;i<n;i++)
        {
            if(isalnum(s[i]))
            filteredString += tolower(s[i]);
        }
        string rs = filteredString;
        reverse(rs.begin(),rs.end());
        cout<<rs<<endl;
        cout<<filteredString<<endl;
        return rs == filteredString;
    }
};
