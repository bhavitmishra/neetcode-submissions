class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto x :tokens)
        {
            if(x != "-" && x != "+" && x != "*" && x != "/")
            {
                st.push(stoi(x));
            }
            else {
                int num1 = st.top();
                st.pop();
                int num2 = st.top();
                st.pop();
                if(x == "+")
                {
                    st.push(num2 + num1);
                }
                if(x == "-")
                {
                    st.push(num2 - num1);
                }
                if(x == "*")
                {
                    st.push(num2 * num1);
                }
                if(x == "/")
                {
                    st.push(num2 / num1);
                }
            }
        }
        return st.top();
    }
};
