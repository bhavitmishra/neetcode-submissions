class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>>st;
        vector<int>ans(temperatures.size() , 0);
        for(int i = temperatures.size() - 1 ; i >= 0 ; i--)
        {
            int todaysTemp = temperatures[i];            
            while(!st.empty() && todaysTemp >= st.top().first )
            {
                st.pop();
            }
            if(st.empty())
            {
                ans[i] = 0;
            }
            else {
                ans[i] = st.top().second - i;
            }
            st.push({todaysTemp , i});
        }
        return ans;
    }
};
