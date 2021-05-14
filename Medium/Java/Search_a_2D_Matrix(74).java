class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        int start, end;
        int[] arr;
        for (int i=0; i<matrix.length; i++) {
            arr = matrix[i];
            start = arr[0];  // first and last elements
            end = arr[arr.length-1];
            if (start <= target && target <= end)  // if possible to be in arr
                return binarySearch(arr, target);  // search and return result
            
        }
        return false;
    }
    boolean binarySearch(int[] arr, int target) {
        int start=0, end=arr.length-1;
        int mid;
        
        while (start <= end)    {
            mid = (start+end) / 2;
            if (arr[mid] == target)
                return true;
            else if (arr[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return false;  // not found
    }
}