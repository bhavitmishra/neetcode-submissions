class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // o(nlogn)
        if(nums.size() == 0) return 0;
        set<int>st(begin(nums) , end(nums));
        nums.clear();
        nums.assign(st.begin() , st.end());
        for(auto x : nums) cout<<x<<endl;
        int i = 1 , ans = 1 , cnt = 1; 
        while(i < nums.size()){
            if(nums[i] == nums[i-1] + 1){
                cnt++;
            }
            else {
                ans = max(ans , cnt);
                cnt = 1;
            }
            i++;
        }
        return max(ans , cnt);
    }
};