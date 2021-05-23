class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        nums = nums1 + nums2
        nums.sort()
        
        L = len(nums)
        if L==1:
            return nums[0]
        if L % 2 != 0:
            return nums[L//2]
        else:
            return (nums[L//2 - 1] + nums[L//2])/2