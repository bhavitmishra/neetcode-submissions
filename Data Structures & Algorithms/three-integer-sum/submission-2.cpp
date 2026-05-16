class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // [-1 ,0 ,1 , 2 , -1, -4] -->  [-4 , -1 , -1 , 0 , 1 , 2]
        sort(nums.begin() , nums.end());
        vector<vector<int>>ans;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k)
            {
                int num = nums[j] + nums[k];
                if(num == -nums[i])
                {
                    ans.push_back({nums[i] , nums[j] , nums[k]});
                    int left_skip = nums[j];
                    int right_skip = nums[k];
                    while(j < k && nums[j] == left_skip) j++;
                    while(k > j && nums[k] == right_skip) k--;
                }
                if(num > -nums[i])
                {
                    k--;
                }
                if(num < -nums[i]) j++;
            }
        }
        return ans;
    }
};
