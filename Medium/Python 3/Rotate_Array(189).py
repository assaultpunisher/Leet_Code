class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        i = 0
        while i < n-(k % n):
            v = nums.pop(0)
            nums.append(v)
            i += 1
        return nums