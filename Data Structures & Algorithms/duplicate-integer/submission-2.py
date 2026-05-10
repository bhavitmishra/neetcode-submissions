class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        vis = set()
        for i,x in enumerate(nums):
            if x in vis:
                return True
            vis.add(x)
        return False