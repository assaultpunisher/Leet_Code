class Solution {
public void merge(int[] nums1, int m, int[] nums2, int n) {
    if(n==0) return;
     m=nums1.length;
    n=n-1;
    for(int i=m-1;i>=0;i--){
        if(nums1[i]==0){
            nums1[i]=nums2[n];
            
        }
        if(n==0){
            break;
        }
        n--;
    }
    Arrays.sort(nums1);
}
}