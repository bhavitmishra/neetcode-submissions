class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // o(n)
        if(nums.size() == 0) return 0;
        unordered_set<int>st(begin(nums) , end(nums));
        int ans = 1;
        for(auto x : st){
            if(st.find(x-1) == st.end()){
                int streak = 1;
                int num = x;
                while(st.find(num + 1) != st.end())
                {
                    num+=1;
                    streak+=1;
                }
                ans = max(ans , streak);
            }
        }
        return ans;
    }
};