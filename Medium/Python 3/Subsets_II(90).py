class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        
        def helper(i,arr):
            if "".join([str(el) for el in arr]) in mem: return
            r.append(arr)
            mem["".join([str(el) for el in arr])] = 1
            for j in range(i,N): helper(j+1,arr + [nums[j]])
                
        r = []; N = len(nums); mem = {}; nums = sorted(nums); helper(0, [])
        return r