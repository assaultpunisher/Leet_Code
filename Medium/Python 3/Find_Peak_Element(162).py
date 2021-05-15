class Solution:
	def findPeakElement(self, nums):
		Map = {}

		for ind,val in enumerate(nums):
			Map[val]=ind

		res = max(nums)
		return Map[res]