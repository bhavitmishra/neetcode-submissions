class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        priority_queue<pair<int,int>> maxHeap;
        vector<int>ans;
        for (auto x : nums)
        {
            mp[x]++;
        }
        for (auto x : mp)
        {
            maxHeap.push({x.second , x.first});
        }
        while(!maxHeap.empty() && k--)
        {
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return ans;
    }
};
