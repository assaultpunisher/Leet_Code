class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = [0]
        heights.append(0)
        
        res = 0
        for right in range(1,len(heights)):
            while stack and heights[stack[-1]] > heights[right]:
                h = heights[stack.pop()]
                left = -1 if not stack else stack[-1] # because pop operation, left = stack.pop() is not the left boundary
                w = right - left -1
                res = max(res,h*w)
            stack.append(right)
        return res