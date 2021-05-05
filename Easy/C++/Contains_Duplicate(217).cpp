class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // runs till n-2
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1]) return true;
        }
        
        return false;
        
    }
};