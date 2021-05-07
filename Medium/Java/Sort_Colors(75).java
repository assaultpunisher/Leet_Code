class Solution {
    public void sortColors(int[] nums) {
        int count0=0, count2=0;
        for(int i=0; i<nums.length; i++) {
            if(nums[i] == 0) count0++;
            if(nums[i] == 2) count2++;
            nums[i] = 1;
        }
        int l=0, r=0;
        while(count0>0 || count2>0) {
            if(count0 > 0) nums[l++] = 0;
            if(count2 > 0) nums[nums.length-1-r++] = 2;
            count0--;
            count2--;
        }
    }
}