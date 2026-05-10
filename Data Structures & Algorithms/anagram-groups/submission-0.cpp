class Solution {
public:
    string customHash(string s){
        int cnt[26] = {0};
        for(auto x : s)
        {
            cnt[x - 'a']++;
        }
        string hash = "";
        for(int i = 0 ; i < 26 ; i++)
        {
            hash+=to_string(cnt[i])+ "#";   
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string , vector<string>>mp;
        for(auto x : strs)
        {
            string s = customHash(x);
            mp[s].push_back(x);
        }
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
}
};
