class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        totalmax, maximum,minimum = nums[0], nums[0],nums[0]
        
        for i in range(1,len(nums)):
            temp = maximum
            
            maximum = max({nums[i], nums[i]*maximum, nums[i]*minimum})
            minimum = min({nums[i], nums[i]*temp   , nums[i]*minimum})
            
            totalmax = max(totalmax, maximum)
        return totalmax