class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        
        for (int l = 0, r = 0; r < nums.size(); r++) {
            if (r == nums.size() - 1 || nums[r] + 1 < nums[r + 1]) {
                ans.push_back(to_string(nums[l]) + (l == r ? "" : "->" + to_string(nums[r])));
                l = r + 1;
            }
        }
        
        return ans;
    }
};