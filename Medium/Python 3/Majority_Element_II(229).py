class Solution(object):
    def majorityElement(self, nums):
        dict_t = Counter(nums)
        n = len(nums) / 3
        ans = []
        for key, val in dict_t.items():
            if val > n:
                ans.append(key)
        return ans