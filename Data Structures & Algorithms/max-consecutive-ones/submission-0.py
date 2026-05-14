class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        ans = 0
        temp = 0
        for i in range(0 , len(nums)) :
            if nums[i] == 1 :
                temp += 1
                ans = max(ans , temp)
            else :
                ans = max(ans , temp)
                temp = 0
        return ans

            