class Solution {
public:
int maxSubArray(vector<int> &nums) {
// write your code here
    int cur = nums[0], sum = nums[0];
    for(int i = 1; i < nums.size(); i++){
        cur = max(nums[i], cur + nums[i]);
        sum = max(cur, sum);
    }
    return sum;
}
};