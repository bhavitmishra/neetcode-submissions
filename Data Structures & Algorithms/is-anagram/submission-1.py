class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
            
        mp = {}
        for x in s:
            mp[x] = mp.get(x, 0) + 1
            
        for x in t:
            if x not in mp:
                return False
            mp[x] -= 1
            if mp[x] < 0:
                return False
                
        return True