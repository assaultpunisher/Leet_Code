class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    auto i = -1;
		for (auto a : nums)
			if (a != val)
				nums[++i] = a;
		return ++i;
}
};