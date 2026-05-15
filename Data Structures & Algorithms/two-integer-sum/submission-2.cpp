class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // brute force -- pick one element and iterate through the entire array
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     int num = nums[i];
        //     for(int j = i + 1 ; j < nums.size() ; j++)
        //     {
        //         if(nums[j] + num == target)
        //         {
        //             return {i , j};
        //         }
        //     }
        // }
        // return {};

        // Optimal - Use some space and do it in one pass
        // num + mus[j] = target ; num = target - nums[j] agar ye mil gya then we have our ansewwer
        map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            int num = target - nums[i];
            if(mp.find(num) != mp.end()) 
            {
                return {mp[target - nums[i]] , i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
