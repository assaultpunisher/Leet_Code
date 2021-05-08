class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(), nums.end());
        vector<int>comb;
        backtrack(res, nums, 0, comb);
        return res;
    }
private:
    void backtrack(vector<vector<int>>& res, vector<int>& nums, int pos, vector<int>& comb){
        res.push_back(comb);
        for(int i = pos; i < nums.size(); i++){
            if(i == pos || nums[i] != nums[i - 1]){
                comb.push_back(nums[i]);
                backtrack(res, nums, i + 1, comb);
                comb.pop_back();
            }
        }
    }
};