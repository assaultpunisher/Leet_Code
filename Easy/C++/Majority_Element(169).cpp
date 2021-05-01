class Solution {
public:
    int majorityElement(vector<int>& v) {
        int x=v[0], c=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==x) c++;
            else if(c==1) x=v[i];
            else c--;
        }
        return x;
    }
};


/*
Or
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }

*/