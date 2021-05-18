class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = 0, e = 0, m = INT_MAX, sum=0;
        bool p = false;
        
        while (e < nums.size()) {
            sum += nums[e]; e++;
            
            while (sum >= target) {
                p = true;
                m = min(m, e-s);
                sum -= nums[s]; s++;
            }
        }
        
        return p ? m : 0;
    }
};