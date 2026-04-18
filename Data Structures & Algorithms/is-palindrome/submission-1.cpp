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
        n = filteredString.size();
        for(int i = 0;i<n/2;i++)
        {
            if(filteredString[i]!=filteredString[n-i-1])
            {
                cout<<filteredString[i];
                return false;
            }    
        }
        return true;
    }
};
