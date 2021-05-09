class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0
        while (i < len(nums)):
            try:
                if nums[i] == nums[i + 1]:
                    if nums[i] == nums[i + 2]:
                        del nums[i + 2]
                    else:
                        i += 2
                else:
                    i += 1
            except:
                break
                
        return len(nums)