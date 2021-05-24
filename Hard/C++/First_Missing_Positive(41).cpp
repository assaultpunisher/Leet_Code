class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
	//removing negative numbers
	for (auto it = nums.begin(); it != nums.end(); )
		*it<=0?nums.erase(it) : it++;
    
	int n = nums.size(),x=0,b;

	//main code for finding missing number
	for(int i=0;;i++){
		b=nums[x];
		if(x==n)
			return n+1;
		if(nums[x]==x+1)
			x++;
		else if(nums[x]<=n && nums[x]!=nums[b-1])
			swap(nums[x],nums[nums[x]-1]);
		else
			(nums[n-1]==n)?swap(nums[x],nums[(n=n-2)]):swap(nums[x],nums[(n=n-1)]);
	}
}
};