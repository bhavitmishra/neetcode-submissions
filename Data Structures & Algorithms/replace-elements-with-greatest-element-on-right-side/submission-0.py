class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        rt_max = arr[len(arr) - 1]
        n = len(arr) - 1
        arr[n] = -1
        for i in range(len(arr) - 2, -1, -1):
            temp = rt_max
            if arr[i] > rt_max :
                rt_max = arr[i]
            arr[i] = temp
        return arr