class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> forReturn = new ArrayList<List<Integer>>();  
        int index = 0, digit = 0;
        for (int i = 0; i < (int)Math.pow(2, nums.length); i++){
            digit = 0;
            index = i;
            List<Integer> toAdd = new ArrayList<Integer>();
            while(index > 1){
                if (index % 2 == 1){
                    toAdd.add(nums[digit]);
                }                
                index = index / 2;
                digit++;
            }
            if(index == 1) toAdd.add(nums[digit]);
            forReturn.add(toAdd);
        }
        return forReturn;
    }
}