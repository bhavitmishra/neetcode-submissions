class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0) return 0;
        if(n == 1) return 1;
        int maxlength = 1 , i = 0 , j = 1;
        unordered_map<char , int>mp;
        mp[s[0]]++;
        while(j < n)
        {
            char c = s[j];
            // new char found
            if(mp.find(c) == mp.end())
            {
                mp[c]++;
                j++;
                maxlength = max(maxlength , j - i);
            }
            else
            {
                mp.erase(s[i]);
                i++;
            }
        }
        return maxlength;
    }
};
