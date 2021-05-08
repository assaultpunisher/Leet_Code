class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 1:
            return [[],[nums[0]]]
        else:
            ans= [[], [nums[0]]]       
            for i in range(1,len(nums)):
                temp = len(ans)
                for j in range(temp):
                    ans.append(ans[j]+[nums[i]])  
            return ans