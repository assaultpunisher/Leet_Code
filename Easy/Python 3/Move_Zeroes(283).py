class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        shift_count = 0
        for index in range(len(nums)):
            if nums[index] != 0:
                nums[shift_count] = nums[index]
                shift_count += 1
    
        for index1 in range(shift_count, len(nums)):
            nums[index1] = 0