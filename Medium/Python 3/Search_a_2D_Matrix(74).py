class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        def bin_search(arr, target):
            if len(arr) == 1:
                return 0 if target == arr[0] else -1
            left, right = 0, len(arr) - 1
            while left <= right:
                mid = (left + right) // 2
                if target < arr[mid]:
                    right = mid - 1
                elif target > arr[mid]:
                    left = mid + 1
                else:
                    return mid
            return -1
        
        for row in matrix:
            if row[0] <= target <= row[-1]:
                if bin_search(row, target) != -1:
                    return True
        return False