class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char , int>mp;
        unordered_map<char , int>mp1;
        int i = 0 , j = 0 , n = s2.size();
        for (auto x : s1) mp[x]++;
        while( j < n )
        {
            int windowSize = j - i + 1;
            if(windowSize < s1.size())
            {
                mp1[s2[j]]++;
            }
            else
            {
                mp1[s2[j]]++;
                if(mp == mp1) return true;
                mp1[s2[i]]--; 
                if(mp1[s2[i]] == 0) mp1.erase(s2[i]);
                i++;
            }
            j++;
        }
        return false;
    }
};
