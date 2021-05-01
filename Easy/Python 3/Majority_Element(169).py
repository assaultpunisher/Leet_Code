class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        nums.sort()
        index = int(len(nums)/2)
        return nums[index]