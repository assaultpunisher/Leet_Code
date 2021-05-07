class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        index, left, right = 0, 0, len(nums) - 1
        
        while index <= right:
            if nums[index] == 2:
                nums[index], nums[right] = nums[right], nums[index]
                right -= 1
            else:
                if nums[index] == 0:
                    nums[index], nums[left] = nums[left], nums[index]
                    left += 1
                index += 1 # we just don't move index when we see a 2
                
        return nums