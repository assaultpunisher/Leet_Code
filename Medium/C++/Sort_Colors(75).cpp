class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt[3] = {0};
        for (int i: nums)
            cnt[i]++;
    
        int k = 0;
        for (int i = 0; i < 3; i++) {
            int j = 0;
            while ( j < cnt[i]) {
                nums[k++] = i;
                j++;
            }
        } 
    }
};