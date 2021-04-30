class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        curr=0
        maxs=[]
        for i in nums:
            if curr+i >=0:
                curr += i
                maxs += [curr]
            else:
                curr = 0
                maxs += [i]
        return max(maxs)