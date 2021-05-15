class Solution {
public:
    //use concept of finding element in segment tree (getval function)
    //or concept similar to merge sort
    int ind=-1;
    int getVal(vector<int>& nums,int i,int j){
        if(i==j)return i;
        int m=(i+j)/2;
        int l=getVal(nums,i,m);
        int r=getVal(nums,m+1,j);
        return nums[l]>=nums[r]?l:r;
    }
    int findPeakElement(vector<int>& nums) {
        return getVal(nums,0,nums.size()-1);
    }
};