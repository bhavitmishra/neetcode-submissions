class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.empty()) return false;
        for(int i = 0 ; i < s.size() ; i++)
        {
            
            char c = s[i];
            if(c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if(c == ')')
                {
                    if(!st.empty() && st.top() == '(') st.pop();
                    else return false;
                }
                if(c == ']')
                {
                    if(!st.empty() && st.top() == '[') st.pop();
                    else return false;
                }
                if(c == '}')
                {
                    if(!st.empty() && st.top() == '{') st.pop();
                    else return false;
                }
            }
        }
        return st.empty() ? true : false;
    }
};
