class Solution {
public:
    string customhash(string &s){
        vector<int>freq(26 , 0);
        for(auto c : s)
        {
            freq[c - 'a']++;
        }
        string hash = "";
        for(int i = 0 ; i < 26 ; i++)
        {
            hash += to_string(freq[i])+"#";
        }
        return hash;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mp;
        vector<vector<string>>ans;
        for(auto x : strs)
        {
            string st = customhash(x);
            mp[st].push_back(x);
        }
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
