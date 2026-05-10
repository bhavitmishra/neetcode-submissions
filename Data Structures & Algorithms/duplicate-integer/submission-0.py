class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        mp = {}
        for i,x in enumerate(nums):
            mp[x]= mp.get(x,0) + 1
        for key,value in mp.items() :
            if value > 1 :
                return True
        return False