class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int i,k=0,c=0,flag;
        sort(nums.begin(),nums.end());
        for(i=nums.size()-2;i>=0;i--)
        {
            if(nums.at(i)<nums.at(i+1))
                c++;
            if(c==2)
            {
                flag=nums.at(i);
                k=-1;
                break;
            }
        }
        if(k==-1)
            return flag;
        else
            return nums.at(nums.size()-1);
    }
};