class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        h={}
        for i,num in enumerate(numbers):
            num = target - numbers[i]
            if num not in h:
                h[numbers[i]] = i
            else:
                return [h[num]+1,i+1]