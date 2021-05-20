class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        Arrays.sort(nums);
        for(int i=0;i<nums.length && nums[i]<=0;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = nums.length-1;
            while(j<k){
                int num = nums[i]+nums[j]+nums[k];
                if(num==0){
                    List<Integer> l = new ArrayList<>();
                    l.add(nums[i]);
                    l.add(nums[j]);
                    l.add(nums[k]);
                    result.add(l);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                    
                    while(k>j && nums[k]==nums[k+1]){
                        k--;
                    }
                    
                }else if(num>0){
                    k--;
                }else{
                    j++;
                }
            }
        }
        return result;
    }
}