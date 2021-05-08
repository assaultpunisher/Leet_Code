class Solution {
    private List<List<Integer>> ans;
    private int[] nums;
    
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        this.ans = new ArrayList<>();
        this.nums = nums;
        
        Arrays.sort(nums);
        backtrack(0, new ArrayList<>());
        return ans;
    }
    
    // Given subset {... nums[i-1]} as prefix
    // Consider all unique subsets from nums[i ... N-1]
    private void backtrack(int i, List<Integer> prefix) {
        ans.add(new ArrayList<>(prefix));
        
        for (int j = i; j < nums.length; j++) {
            if (j == i || nums[j] != nums[j - 1]) {
                prefix.add(nums[j]);
                backtrack(j + 1, prefix);
                prefix.remove(prefix.size() - 1);
            }
        }
    }
}