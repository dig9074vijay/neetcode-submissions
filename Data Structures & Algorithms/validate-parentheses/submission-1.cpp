class Solution {
public:

    char getClosingBrace(char c)
    {
        switch(c)
        {
            case '(':
                return ')';
                break;
            case '{':
                return '}';
                break;
            case '[':
                return ']';
                break;
            
        }
        return ' ';
    }
    bool isValid(string s) {
        stack<char> st;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else
            {
                if(st.empty()) return false;
                char c = st.top();
                if(s[i]!=getClosingBrace(c))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
